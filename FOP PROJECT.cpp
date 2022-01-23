/*********************************************ELECTION MANAGMENT PROGRAM************************************************/
#include<stdio.h>
#define CANDIDATE_COUNT
#define CANDIDATE1 "CANDIDATE1 "
#define CANDIDATE2 "CANDIDATE2 "
#define CANDIDATE3 "CANDIDATE3 "
#define CANDIDATE4 "CANDIDATE4 "
int votesCount1 = 0, votesCount2 = 0, votesCount3 = 0, votesCount4 = 0, spoiledtvotes = 0, totalvotes = 0;    //declaring and initializing variables
int number;
int choice;
int i, age;
long long CNIC_NO;
int count = 0;
int pass;
void castVote(){
	printf("\t\tPLEASE SELECT THE CANDIDATE:\n\n\n");    //prompts user to select a certain candidate
	printf("\t\t\t********************** VOTE CASTING *****************************\n");
	printf("\t\t\t*                                                               *\n");
	printf("\t\t\t*\t\tEnter 1 for Candidate1 \t\t\t\t*\n");
	printf("\t\t\t*\t\tEnter 2 for Candidate2 \t\t\t\t*\n");
	printf("\t\t\t*\t\tEnter 3 for Candidate3 \t\t\t\t*\n");
	printf("\t\t\t*\t\tEnter 4 for Candidate4 \t\t\t\t*\n");
	printf("\t\t\t*                                                               *\n");
	printf("\t\t\t*****************************************************************\n\n\n");
	printf("\n");
	printf("ENTER THE NUMBER OF YOUR CHOICE: ");
	scanf("%d", &number);   //scanf statement is used to read input from keyboard
	if (number == 1){
		votesCount1++;
	}
	else if (number == 2){
		votesCount2++;
	}
	else if (number == 3){
		votesCount3++;
	}
	else if (number == 4){
		votesCount4++;
	}
	printf("\n");
	printf("\t\tTHANK YOU FOR VOTING AND BEING A RESPONSIBLE CITIZEN !\n\n\n");
}
void votesCount(){
	printf("ENTER ADMINISTRATIVE  PASSWORD TO FIND VOTE COUNT\n");    //A password will be required to enter by the administration to view the statitics
	printf("ADMINISTRATIVE PASSWORD: \n");
	scanf("%d", &pass);
	if (pass == 1234){
		printf("VALID PASSWORD\n");
	}
	else{
		printf("PASSWORD NOT VALID\n");
	}
	printf("\n\n ##### VOTING STATISTICS ####");
	printf("\n %s - %d ", CANDIDATE1, votesCount1);
	printf("\n %s - %d ", CANDIDATE2, votesCount2);
	printf("\n %s - %d ", CANDIDATE3, votesCount3);
	printf("\n %s - %d ", CANDIDATE4, votesCount4);
	printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes);
}
void LeadingCandidate(){
	printf("ENTER ADMINISTRATIVE  PASSWORD TO FIND LEADING CANDIDATE\n"); //A password will be required to enter by the administration to view the leading candidate
	printf("ADMINISTRATIVE PASSWORD:\n ");
	scanf("%d", &pass);
	if (pass == 1234){
		printf("VALID PASSWORD\n");
	}
	else{
		printf("PASSWORD NOT VALID\n");
	}
	printf("\n\n  #### LEADING CANDIDATE ####\n\n");
	if (votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
		printf("[%s] IS WINNING IN THIS POLLING STATION!!!", CANDIDATE1);
	else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
		printf("[%s] IS WINNING IN THIS POLLING STATION!!!", CANDIDATE2);
	else if (votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
		printf("[%s] IS WINNING IN THIS POLLING STATION!!!", CANDIDATE3);
	else if (votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
		printf("[%s] IS WINNING IN THIS POLLING STATION!!!", CANDIDATE4);
	else
		printf("VOTES ARE TIED IN THIS STATION!");
}
void totalvotes_casted(){
	printf("ENTER ADMINISTRATIVE  PASSWORD TO FIND TOTAL VOTES\n");   //A password will be required to enter by the administration to find the total votes
	printf("ADMINISTRATIVE PASSWORD: \n");
	scanf("%d", &pass);
	if (pass == 1234){
		printf("VALID PASSWORD\n");
	}
	else{
		printf("PASSWORD NOT VALID\n");
	}
	totalvotes = (votesCount1 + votesCount2 + votesCount3 + votesCount4 + spoiledtvotes);
	printf("THE TOTAL VOTES CASTED ARE: %d\n", totalvotes);
}
int main()
{
	do{
		printf("\nPLEASE ENTER YOUR AGE:");
		scanf("%d", &age);
		if (age >= 18){
			printf("YOU ARE ELLIGIBLE FOR VOTING.\n");
		}
		else{
			printf("WARNING!!!\nNOT ELLIGIBLE FOR VOTING!!!");
			printf("\n");
			continue;
		}
		printf("\t\t\t\t****************************************************\n");
		printf("\t\t\t\t*                                                  *\n");
		printf("\t\t\t\t*                                                  *\n");
		printf("\t\t\t\t*                                                  *\n");
		printf("\t\t\t\t*###### WELCOME TO ONLINE VOTING SYSTEM 2020 ######*\n");
		printf("\t\t\t\t*                                                  *\n");
		printf("\t\t\t\t*                                                  *\n");
		printf("\t\t\t\t*                                                  *\n");
		printf("\t\t\t\t****************************************************\n");
		printf("INSTRUCTIONS\n");         //general instructions for voting will be displayed
		printf("1.ONCE YOU ENTER THE SYSTEM, ENTER YOU AGE.\n");
		printf("2.THE SYSTEM WILL DECLARE WHETHER YOU ARE ELLIGIBLE FOR VOTING OR NOT\n");
		printf("3.IN CASE YOU ARE ELLIGIBLE ENTER YOUR CNIC NUMBER\n");
		printf("4.CAREFULLY SELECT THE CANDIDATE OF YOUR CHOICE\n");
		printf("5.IN ORDER TO ENSURE PRIVACY THE POLLING STAFF NEEDS TO ENTER A SPECIFIC PASSWORD TO FIND THE LEADING CANDIDATE AND VOTE COUNT\n");
		printf("6.THE ELECTION BOARD POSSESSESFULL AUTHORITY TO MAINTAIN ORDER.ALL STEPS ARE TAKEN TO ENSURE PRIVACY OF VOTER'S INFORMATION!\n");
		printf("\n----------- ENTER YOUR CNIC NO(skip dashes)----------:\n");  //user will be asked to enter their CNIC number
		printf("CNIC NUMBER: ");
		scanf("%lld", &CNIC_NO);
		printf("\n 1. CAST THE VOTE");
		printf("\n 2. FIND VOTES COUNT FOR EACH CANDIDATE");
		printf("\n 3. FIND THE LEADING CANDIDATE ");
		printf("\n 4. FIND TOTAL VOTES");
		printf("\n 0. EXIT FROM THE SYSTEM");
		printf("\n\n PLEASE ENTER YOUR CHOICE : ");      //prompts user to enter a number of their choice
		scanf("%d", &choice);
		switch (choice)      //using switch statement
		{
		case 1:
			castVote();
			break;
		case 2:
			votesCount();
			break;
		case 3:
			LeadingCandidate();
		case 4:
			totalvotes_casted();
			break;
		case 0:
			break;
		default:
			printf("\n ERROR\nINVALID CHOICE!");
		}
	} while (choice != 0);
	getchar();
	system("pause");
	return 0;
}