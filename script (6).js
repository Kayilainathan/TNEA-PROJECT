let choices = [];

function addChoice() {
  const collegeCode = prompt("Enter College Code:");
  const department = prompt("Enter Department:");
  if (collegeCode && department) {
    choices.push({ collegeCode, department });
    displayChoices();
  }
}

function displayChoices() {
  const choicesList = document.getElementById("choices-list");
  choicesList.innerHTML = "";
  choices.forEach((choice, index) => {
    choicesList.innerHTML += `${index + 1}. College Code: ${choice.collegeCode}, Department: ${choice.department}<br>`;
  });
}

function generateList() {
  const name = document.getElementById("name").value;
  const cutoff = document.getElementById("cutoff").value;
  const numChoices = document.getElementById("numChoices").value;
  
  let generatedText = `TNEA CHOICE LIST\n`;
  generatedText += `NAME : ${name}\n`;
  generatedText += `Cut off : ${cutoff}\n`;
  generatedText += `No of Choices = ${numChoices}\n\n`;
  generatedText += `S.NO       COLLEGE CODE     DEPARTMENT\n`;
  generatedText += `_____________________________________\n`;
  
  choices.forEach((choice, index) => {
    generatedText += `${index + 1}        ${choice.collegeCode}                    ${choice.department}\n`;
  });

  const generatedTextArea = document.getElementById("generated-text");
  generatedTextArea.value = generatedText;
  document.getElementById("generated-list").style.display = "block";
}

function downloadFile() {
  const generatedText = document.getElementById("generated-text").value;
  const blob = new Blob([generatedText], { type: "text/plain;charset=utf-8" });
  saveAs(blob, "tnea_choice_list.txt");
}
