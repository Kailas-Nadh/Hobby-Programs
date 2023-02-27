/* This code is under development */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct player{
char name[20];
int runs_scored;
int balls_faced;
int fours;
int sixes;
float sr;
int overs;
int maidens;
int runs_conceded;
int wickets;
int dot_balls;
float economy;
}defenders[12],chasers[12];

int main(){
int i,j,defender_runs=0,defender_overs=0,chaser_runs=0,chaser_overs=0,defender_wickets=0,chaser_wickets=0,legal_delivery=0;
char defender[20],chaser[20],host[20],away[20],toss[20];

/*printf("\n*****WELCOME TO CRICKET SCORE APP*****\n\n");
printf("Enter Host Team: ");
scanf("%s",host);
printf("Enter Away Team: ");
scanf("%s",away);
printf("Toss: ");
scanf("%s",toss);
printf("1st batting: ");
scanf("%s",defender);
printf("Chasing team: ");
scanf("%s",chaser);

//Enter players of 1st batting team
printf("\nMembers of Batting Team:\n");
for(i=0;i<11;i++){
    printf("Member %d: ",i+1);
    if(i==0)
     scanf("\n");
	gets(defenders[i].name);
}

//Enter players of chasing team
printf("\nMembers of Chasing Team:\n");
for(i=0;i<11;i++){
    printf("Member %d: ",i+1);
	gets(chasers[i].name);
}

printf("\n1st batting %s...",defender);
printf("\n%s-%d/%d\n",defender,defender_runs,defender_wickets);*/
int wicket_flag=0;
do{ //loop to keep innings going

  do{ //loop to bring a new batter

   do{ //loop for over change
	printf("loop ok\n");
   }while(legal_delivery%6==0);
   	
  }while(wicket_flag!=0);
wicket_flag=0;
}while(defender_wickets!=10 && defender_overs!=20);

	return 0;
}
