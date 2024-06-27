/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
//Code for making TNEA choice list
void main ()
{
  FILE *fp;  //File pointer 
  fp = fopen ("choice_list.txt", "w");   //file opening
  char name[100];
  char dpt[50][50][50];   //declaring char for name and for storing department entered

  int i, n,x;   //i for loop,n for number of choices for loop
  float cutoff;
  int code[100];   //storing entered college code in a array
  char college[100][100][100] = { {"CEG"}, {"MIT"},
  {"SSN"}, {"CIT"}, {"PSG"}, {"REC"}, {"SVCE"} ,{"Sri Sairam"} ,{"Saveetha"},
  {"St.Joseph"}, {"RMK"}, {"RMD"}, {"Sri Sairam Institute"}, {"Loyola ICAM"},
  {"PANIMALAR"}, {"GCT Coimbatore"}, {"PSG iTECH"}, {"SRM Valliammai"},
  {"SRI KRISHNA"}, {"SRI ESWAR"}, {"THIAGARAJAR"},{"CIT Coimbatore"}
  };  //declaring college names , name will appear at the final list for their respective code
  char clg_dis[100][100][100] = { {"1    - CEG"}, {"4    - MIT"},
  {"1315 - SSN"}, {"1399 - CIT"}, {"2006 - PSG"}, {"1211 - REC"}, 
  {"1219 - SVCE"} ,{"1419 - Sri Sairam"} ,{"1216 - Saveetha"},
  {"1317 - St.Joseph"}, {"1113 - RMK"}, {"1112 - RMD"}, {"1324 - Sri Sairam Institute"},
  {"1450 - Loyola ICAM"}, {"1210 - PANIMALAR"}, {"2005 - GCT Coimbatore"},
  {"2377 - PSG iTECH"}, {"1422 - SRM Valliammai"},
  {"2718 - SRI KRISHNA"}, {"2739 - SRI ESWAR"}, {"5008 - THIAGARAJAR"},{"2007 - CIT Coimbatore"}
  };  
  x=21;
  printf ("Enter your name : ");
  scanf ("%s", &name);
  printf ("\nEnter your Cut off : ");
  scanf ("%f", &cutoff);
  printf ("\nEnter the number of choices your wishing to fill : ");
  scanf ("%d", &n);

  {
	/*printf ("1.%s\n4.%s\n1315.%s\n2006.%s\n1399.%s\n1211.%s\n1219.%s\n1419.%s\n1216.%s\n",
			college[0], college[1], college[2], college[4], college[3],
			college[5], college[6], college[7], college[8], college[9], college[10],
			college[11], college[12], college[13], college[14])
			//display of college names and code*/
	for(i=0;i<=x;i++)
	{
	    printf("\n%s",clg_dis[i]);
	}
			printf("\n\t\tLoading please wait ...");
			

	printf ("\n\n\tTO STOP ENTER THE COLLEGE CODE AS 0\n");
  }
	  sleep(4);  //pause the execution for 4 seconds
  //the choice preparation block loop starts
  for (i = 1; i <= n; i++)
	{
	  printf ("\nEnter the choice no %d\n", i);
	  printf ("\nEnter the college code : ");
	  scanf ("%d", &code[i]);

	  printf ("\nEnter the department : ");
	  scanf ("%s", &dpt[i]);
	  if (code[i] == 0)
		{
		  break;
		}
		
	}
  printf("\n\t\tCreating choice list ...\n");
  fprintf(fp,"\t\t\t\tTNEA CHOICE LIST\n");
  fprintf (fp, "\nNAME : %s", name);
  fprintf (fp, "\nCut off : %.1f", cutoff);
  fprintf (fp, "\nNo of Choices = %d\n", n);
 //to print details in the file using fprintf

      printf
	("\nS.NO       COLLEGE CODE     COLLEGE NAME              DEPARTMENT");
	sleep(2);
  fprintf (fp,
		   "\nS.NO      COLLEGE CODE     COLLEGE NAME              DEPARTMENT");
  fprintf (fp,
		   "\n_____________________________________________________________________");
		   //the display of entered details as choice list starts
  for (i = 1; i <= n; i++)
	{
	  if (code[i] == 1)   //code =1 for CEG
		{
		  printf("\n%d          %d                    %s                       %s",i, code[i], college[0], dpt[i]);
		  fprintf (fp,   "\n%d        %d                    %s                         %s",i, code[i], college[0], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
	  else if (code[i] == 4)   //code=4 for MIT
		{
		  printf("\n%d          %d                    %s                       %s",i, code[i], college[1], dpt[i]);
		  fprintf (fp,	   "\n%d        %d                    %s                         %s",i, code[i], college[1], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
	  else if (code[i] == 1315)   //code=1315 for SSN
		{
		  printf("\n%d          %d                 %s                        %s",i, code[i], college[2], dpt[i]);
		  fprintf (fp,		   "\n%d        %d                 %s                         %s",i, code[i], college[2], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
	  else if (code[i] == 1399)   //code=1399 for CIT 
		{
		  printf("\n%d          %d                 %s                        %s",i, code[i], college[3], dpt[i]);
		  fprintf (fp,  "\n%d        %d                 %s                         %s",i, code[i], college[3], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
	  else if (code[i] == 2006)   //code=2006 for PSG
		{
		  printf("\n%d          %d                 %s                       %s",i, code[i], college[4], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                         %s",i, code[i], college[4], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		} 
	  else if (code[i] == 1211)   //code=1211 for REC
		{
		  printf("\n%d          %d                 %s                        %s",i, code[i], college[5], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                         %s",i, code[i], college[5], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
	  else if (code[i] == 1219)   //code=1219 for SVCE
		{
		  printf("\n%d          %d                 %s                       %s",i, code[i], college[6], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                        %s",i, code[i], college[6], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
       else if (code[i] == 1419)   //code=1419 for Sri Sairam
		{
		  printf("\n%d          %d                 %s                 %s",i, code[i], college[7], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                  %s",i, code[i], college[7], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
       else if (code[i] == 1216)   //code=1216 for Saveetha
		{
		  printf("\n%d          %d                 %s                   %s",i, code[i], college[8], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                    %s",i, code[i], college[8], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
       else if (code[i] == 1317)   //code=1317 for St.Joseph
		{
		  printf("\n%d          %d                 %s                   %s",i, code[i], college[9], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                    %s",i, code[i], college[9], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
       else if (code[i] == 1113)   //code=1113 for RMK
		{
		  printf("\n%d          %d                 %s                         %s",i, code[i], college[10], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                          %s",i, code[i], college[10], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
       else if (code[i] == 1112)   //code=1112 for RMD
		{
		  printf("\n%d          %d                 %s                         %s",i, code[i], college[11], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                          %s",i, code[i], college[11], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
       else if (code[i] == 1324)   //code=1324 for Sri Sairam institue of tech
		{
		  printf("\n%d          %d                 %s          %s",i, code[i], college[12], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s           %s",i, code[i], college[12], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
       else if (code[i] == 1450)   //code=1450 for Loyala ICAM
		{
		  printf("\n%d          %d                 %s                 %s",i, code[i], college[13], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                  %s",i, code[i], college[13], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
       else if (code[i] == 1210)   //code=1210 for PANIMALAR
		{
		  printf("\n%d          %d                 %s                   %s",i, code[i], college[14], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                    %s",i, code[i], college[14], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
       else if (code[i] == 2005)   //code=2005 for GCT
		{
		  printf("\n%d          %d                 %s                 %s",i, code[i], college[15], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                  %s",i, code[i], college[15], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
       else if (code[i] == 2377)   //code=2377 for PSG iTECH
		{
		  printf("\n%d          %d                 %s                    %s",i, code[i], college[16], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                     %s",i, code[i], college[16], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
       else if (code[i] == 1422)   //code=1422 for SRM Valliammai
		{
		  printf("\n%d          %d                 %s                %s",i, code[i], college[17], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                 %s",i, code[i], college[17], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
       else if (code[i] == 2718)   //code=2718 for SRI KRISHNA
		{
		  printf("\n%d          %d                 %s                  %s",i, code[i], college[18], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                   %s",i, code[i], college[18], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
       else if (code[i] == 2739)   //code=2739 for SRI ESWAR
		{
		  printf("\n%d          %d                 %s                    %s",i, code[i], college[19], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                     %s",i, code[i], college[19], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
       else if (code[i] == 5008)   //code=1216 for THIAGARAJAR
		{
		  printf("\n%d          %d                 %s                  %s",i, code[i], college[20], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                   %s",i, code[i], college[20], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
       else if (code[i] == 2007)   //code=2007 for CIT Coimbatore
		{
		  printf("\n%d          %d                 %s                 %s",i, code[i], college[21], dpt[i]);
		  fprintf (fp,"\n%d        %d                 %s                  %s",i, code[i], college[21], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}
	  else if (code[i] == 0)
		{
		    dpt[i]==0;
		  break;
		}
	  else
		{
		  printf("\n%d          %d                   -                        %s",i, code[i], dpt[i]);
		  fprintf (fp,"\n%d        %d                 -                           %s",i, code[i], dpt[i]);
		  fprintf (fp,"\n___________________________________________________________________");
		}   
		//if the entered code is not in the data base(if not declared eariler

	}
	//Display of possible choice that the user get based on the entered cutoff and choices
	//with refernce to previous year cutoff ... NOTE : IT IS JUST THE POSSIBLE CHANCE OF getting
	//THE CUTOFF AND RANK WILL CHANGE YEAR TO YEAR AND BASED ON YOUR COMMUNITY
  for (i=0;i<=n;i++)
	if (cutoff >= 197.5 && code[i] == 1)
	  {
		printf ("\nYou have chance of getting %s , %s dpt", college[0],dpt[i]);
		fprintf (fp, "\nYou have chance of getting %s , %s dpt", college[0],dpt[i]);
	  }
	else if (cutoff >= 193.5 && cutoff <= 197 && code[i] == 4)
	  {
		printf ("\nYou have chance of getting %s , %s dpt", college[1],dpt[i]);
		fprintf (fp, "\nYou have chance of getting %s , %s dpt", college[1],dpt[i]);
	  }
	else if (cutoff >= 194.5 && cutoff <= 197 && code[i] == 1315)
	  {
		printf ("\nYou have chance of getting %s , %s dpt", college[2],dpt[i]);
		fprintf (fp, "\nYou have chance of getting %s , %s dpt", college[2],dpt[i]);
	  }
    else if (cutoff >= 185 && code[i] == 1399)
	  {
		printf ("\nYou have chance of getting %s , %s dpt", college[3],dpt[i]);
		fprintf (fp, "\nYou have chance of getting %s , %s dpt", college[3],dpt[i]);
	  }
    else if (cutoff >= 184 && cutoff <= 190 && code[i] == 1211)
	  {
		printf ("\nYou have chance of getting %s , %s dpt", college[5],dpt[i]);
		fprintf (fp, "\nYou have chance of getting %s , %s dpt", college[5],dpt[i]);
	  }
    else if (cutoff >= 180 && cutoff <= 190 && code[i] == 1219)
	  {
		printf ("\nYou have chance of getting %s , %s dpt", college[6],dpt[i]);
		fprintf (fp, "\nYou have chance of getting %s , %s dpt", college[6],dpt[i]);
	  }   
    else if (cutoff >= 180 && cutoff <= 190 && code[i] == 1419)
	  {
		printf ("\nYou have chance of getting %s , %s dpt", college[7],dpt[i]);
		fprintf (fp, "\nYou have chance of getting %s , %s dpt", college[7],dpt[i]);
	  }   
    else if (cutoff >= 180 && cutoff <= 190 && code[i] == 1216)
	  {
		printf ("\nYou have chance of getting %s , %s dpt", college[8],dpt[i]);
		fprintf (fp, "\nYou have chance of getting %s , %s dpt", college[8],dpt[i]);
	  }   
  printf("\n\tTo download the choice list as file click the download tab on the upper tab");
  printf("\n\tThank you %s for visting\n\n\t\t\t\tcoded by kayilainathan.choicelist.c",name);
  fprintf(fp,"\n\tThank you %s for using choice list creater - coded by KAYILAINATHAN\n",name);
  fprintf(fp,"\n\t\t\tTOP COLLEGE LIST");
  for(i=0;i<=x;i++)
	{
	    fprintf(fp,"\n%s",clg_dis[i]);
	}
  fprintf(fp,"\n\n\t\t\t\t\t\t\t\t\tkayilainathan.choicelist.c.code");
  fclose (fp);  
}
