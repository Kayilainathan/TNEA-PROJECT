const colleges = [
  { code: 1, name: "CEG" },
  { code: 4, name: "MIT" },
  { code: 1315, name: "SSN" },
  { code: 1399, name: "CIT" },
  { code: 2006, name: "PSG" },
  { code: 1211, name: "REC" },
  { code: 1219, name: "SVCE" },
  { code: 1419, name: "Sri Sairam" },
  { code: 1216, name: "Saveetha" },
  { code: 1317, name: "St.Joseph" },
  { code: 1113, name: "RMK" },
  { code: 1112, name: "RMD" },
  { code: 1324, name: "Sri Sairam Institute" },
  { code: 1450, name: "Loyola ICAM" },
  { code: 1210, name: "PANIMALAR" },
  { code: 2005, name: "GCT Coimbatore" },
  { code: 2377, name: "PSG iTECH" },
  { code: 1422, name: "SRM Valliammai" },
  { code: 2718, name: "SRI KRISHNA" },
  { code: 2739, name: "SRI ESWAR" },
  { code: 5008, name: "THIAGARAJAR" },
  { code: 2007, name: "CIT Coimbatore" }
];

function generateChoices() {
  const choicesContainer = document.getElementById('choicesContainer');
  const numChoices = document.getElementById('choices').value;
  choicesContainer.innerHTML = '';

  for (let i = 0; i < numChoices; i++) {
    const choiceDiv = document.createElement('div');
    choiceDiv.innerHTML = `
      <label>Choice ${i + 1}:</label>
      <input type="number" placeholder="College Code" required>
      <input type="text" placeholder="Department" required>
    `;
    choicesContainer.appendChild(choiceDiv);
  }

  document.getElementById('downloadBtn').style.display = 'block';
}

function downloadChoices() {
  const name = document.getElementById('name').value;
  const cutoff = document.getElementById('cutoff').value;
  const choices = document.getElementById('choices').value;
  const choicesContainer = document.getElementById('choicesContainer');

  let content = `TNEA CHOICE LIST\n\nNAME: ${name}\nCut off: ${cutoff}\nNo of Choices: ${choices}\n\n`;
  content += "S.NO\tCOLLEGE CODE\tCOLLEGE NAME\tDEPARTMENT\n";
  content += "_____________________________________________________________________\n";

  for (let i = 0; i < choicesContainer.children.length; i++) {
    const choiceDiv = choicesContainer.children[i];
    const collegeCode = choiceDiv.children[1].value;
    const department = choiceDiv.children[2].value;

    const college = colleges.find(c => c.code == collegeCode);
    const collegeName = college ? college.name : '-';
    
    content += `${i + 1}\t${collegeCode}\t${collegeName}\t${department}\n`;
    content += "_____________________________________________________________________\n";
  }

  const blob = new Blob([content], { type: 'text/plain' });
  const a = document.createElement('a');
  a.href = URL.createObjectURL(blob);
  a.download = 'choice_list.txt';
  a.click();
}
