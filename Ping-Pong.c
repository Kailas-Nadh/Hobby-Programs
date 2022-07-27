/* A C Program to calculate points in a table tennis match
	Created by Kailas Nadh J
	https://github.com/Kailas-Nadh
It follows both best of 3 and 5 formats of the game.
Happy ping-ponging */



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<unistd.h>

char* shortForm(char name[20]){
int j;
static char shortform[10];
for(j=0;j<3;j++){
    if(isupper(name[j])){
        /*To convert all alphabets in the abbreviation into
         its corresponding lowercase characters*/
    	name[j]=tolower(name[j]);
    }
	shortform[j]=name[j];
}
name[j]='\0';
return shortform;
}//Function to find short forms

int set(int numOfset,char short1[20],char short2[20]){

char Player1_name[20],Player2_name[20],awardee[6];
int Player1_sets=0,Player2_sets=0,Player1_pts,Player2_pts,gamePoint,winPoint,set=1;
int winSet=(numOfset/2)+1;

strcpy(Player1_name,short1);
strcpy(Player2_name,short2);
shortForm(short1);
shortForm(short2);

//If shortforms are same add 1 and 2 respectively to the abbreviations.
if(strcmp(short1,short2)==0){
	short1[3]='1';
	short1[4]='\0';
	short2[3]='2';
	short2[4]='\0';
}

printf("The player abbreviations are:\n %s and %s\n\nUse them to calculate points...\n",short1,short2);

while(Player1_sets!=winSet && Player2_sets!=winSet){
 Player1_pts=Player2_pts=0;
 winPoint=11;
 gamePoint=10;
 printf("\nGet ready for Set %d...\n\n",set);
 sleep(2);
 S:
 printf("\n*****SET %d*****\n",set);
  while(Player1_pts!=winPoint && Player2_pts!=winPoint){
  P:	printf("\nPoint goes to: ");
     	scanf("%s",awardee);
    	if(strcmp(awardee,short1)==0)
  	      Player1_pts++;
    	else if(strcmp(awardee,short2)==0)
  	      Player2_pts++;
    	else {
  	    	printf("Invalid input..!!!");
  	    	goto P;
  	}
  	
  	if(Player1_pts==gamePoint && Player2_pts==gamePoint){
  		gamePoint++;
  		winPoint++;
  	}
 	printf("\nPOINT LEVEL:-\n%s:%d-%d:%s.\n",Player1_name,Player1_pts,Player2_pts,Player2_name);
  }//Loop to run a set
  
        if(Player1_pts==winPoint){
  	  	    Player1_sets++;
  	  	    printf("\nSet %d  won by %s by %d-%d.\n",set,Player1_name,Player1_pts,Player2_pts);
  	  	    }
        else if(Player2_pts==winPoint){
  	  	 	Player2_sets++;
  	  	    printf("\nSet won by %s by %d-%d.\n",Player2_name,Player2_pts,Player1_pts);
  	  	 }
        else{
          printf("\n\nOops something went wrong..!!!\n\n");
          sleep(2);
          goto S;
          }
  	  	set++;
  	  	printf("\nSET LEVEL:-\n%s:%d-%d:%s.\n",Player1_name,Player1_sets,Player2_sets,Player2_name);
  	  	printf("--------------------------------------------------------------\n");
  	  	sleep(1);	
  	  	
}//Loop to run a match

if(Player1_sets==winSet){
	printf("\n\nWinner: %s\n",Player1_name);
}

else if(Player2_sets==winSet){
	printf("\n\nWinner: %s\n",Player2_name);
}

else{
	printf("\n\nOops something went wrong..!!!\n\nMoving back to Main Menu...\n\n");
	sleep(2);
	return 0;
}

printf("\nWinner takes all glory...\n\n");
return 0;
}//The game happens here


int main(){

char Player1[20],Player2[20],choice_set,choice_name,goagain;


printf("\n\n\n");
printf("ooooooo  ooooooo  o      o  oooooooo             ooooooo  ooooooo  o      o  oooooooo\n");
printf("o     o     o     oo     o  o                    o     o  o     o  oo     o  o\n");
printf("o     o     o     o o    o  o                    o     o  o     o  o o    o  o\n");
printf("ooooooo     o     o   o  o  o   oooooo   ooooo   ooooooo  o     o  o   o  o  o   oooooo\n");
printf("o           o     o    o o  o     o  o           o        o     o  o    o o  o     o  o\n");
printf("o           o     o     oo  o     o  o           o        o     o  o     oo  o     o  o\n");
printf("o        ooooooo  o      o  ooooooo  o           o        ooooooo  o      o  ooooooo  o\n\n\n\n");
printf("Version 1.0.0\nAuthor:Kailas Nadh\nCreated on:15 January 2022\n\n");
sleep(1);

I:
printf("\nPLAYER NAMES:-\n1.Enter player names\n2.Stick with default names\n3.Exit\n\nEnter your choice: ");
scanf(" %c",&choice_name);

//Input Player names
switch(choice_name){
 case '1': printf("\nEnter Player names\nPlayer 1:");
           scanf(" ");
           gets(Player1);
           printf("Player 2:");
           gets(Player2);
           break;
 case '2': strcpy(Player1,"Player 1");
           strcpy(Player2,"Player 2");
           printf("The player names are Player 1 and Player 2 ...");
           break;
 case '3': printf("\nHope you enjoyed Ping-Pong...\n");
           sleep(1);
           printf("Bye...\n");
           exit(0);
 default:  printf("\nInvalid input my friend..!!!\n\n");
           goto I;
          }

//Input Game Format          
J:
printf("\n\nGAME FORMAT:-\n1.Best of 3\n2.Best of 5\n3.Exit\n\nEnter your choice: ");
scanf(" %c",&choice_set);
switch(choice_set){
 case '1': set(3,Player1,Player2);
           break;
 case '2': set(5,Player1,Player2);
           break;
 case '3': Z:
           printf("\nHope you enjoyed Ping-Pong...\n");
           sleep(1);
           printf("Bye...\n");
           exit(0);
 default:  printf("\nInvalid input my friend..!!!\n\n");
           goto J;
}

printf("\nDo you want to continue.?(y/n)\n");
B:
printf(" >");
scanf(" %c",&goagain);
if(goagain=='y' || goagain=='Y'){
    system("clear");
	main();
}
else if(goagain=='n'||goagain =='N'){
	goto Z;
}
else{
	printf("\nInvalid input..!!!\n");
	goto B;
}
return 0;
}
