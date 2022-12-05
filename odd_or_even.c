#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

struct Game{
char name[20];
int runs;
}c,p;

void main(){
int ch,t_val=0,toss_player,toss_com,toss_total,decision=0,bat,bowl,first;
char cho,toss[5],choice[5],batsman[20];
strcpy(c.name,"System");
p.runs=0;
c.runs=0;

//Main Menu
printf(".......................\n");
printf("     ODD OR EVEN\n     1.New Game\n     2.Exit\n");
printf(".......................\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch){
  case 1:
    printf("\nHi!.What is your name..?\n>");
    scanf("%s",p.name);
    printf("Hi %s.! Let's begin...",p.name);

    //Tossing
    printf("\n\nOdd or Even.?\n(Default is even)\n>");
    scanf("%s",toss);
    if(strcmp(toss,"odd\0")==0)
      t_val=1;
    srand(time(0));
    toss_com=(rand()%7)+0;
    printf("\nToss:");
    scanf("%d",&toss_player);
    toss_total=toss_com+toss_player;
    printf("My toss value:%d.\nSo it makes a total:%d.",toss_com,toss_total);

    //Choosing
    if(toss_total % 2 == t_val){
      printf("\n\nYou won the toss..!!!\nWhat do you choose..? Batting or Bowling..?\n");
      while(decision==0){
        scanf("%s",choice);
        if(strcmp(choice,"bat\0")==0){
          strcpy(batsman,p.name);
          decision=1;
          printf("\nYOU choose to bat first.\n");
          }
        else if (strcmp(choice,"bowl\0")==0){
          strcpy(batsman,c.name);
          decision=1;
         }
        else
          printf("\nMaybe a type error...\nPlease type it correctly.\n");
        }
      }

    //Lost the toss scenario
    else{
      printf("\n\nYou lost the toss.!\n");
      srand(time(0));
      decision=(rand()%2)+0;
      if(decision==0){
        strcpy(batsman,c.name);
        printf("\nI choose to bat first.\n");
        }
      else{
        strcpy(batsman,p.name);
        printf("\nI choose to bowl first.\n");
        }
      }

     //First batting
     printf("\nFirst batsman:%s",batsman);
     printf("\nLet's start the first batting.\n");
     bat=0;
     bowl=-1;
     while(1){
     //If first batting is mine
     if(strcmp(batsman,p.name)==0){
       srand(time(0));
       bowl=(rand()%7)+0;
       printf("\n\n%s:",p.name);
       scanf("%d",&bat);
       printf("%s:%d",c.name,bowl);
       if(bat==bowl){
         printf("\nWICKET..!!!\nEnd of Innings...\n\n-TOTAL-\n%s:%d\n",p.name,p.runs);
         printf("\n\n%s need %d runs to win\n\n",c.name,p.runs+1);
         first=p.runs;
         strcpy(batsman,c.name);
         break;
        }
       else if(bat>7||bat<0){
         bat=0;
         p.runs=p.runs+bat;
         }
       else
         p.runs=p.runs+bat;
     printf("\n\nSCORE:%d",p.runs);
       }

     //If first batting is system's
     else if(strcmp(batsman,c.name)==0){
       srand(time(0));
       bat=(rand()%7)+0;
       printf("\n\n%s:",p.name);
       scanf("%d",&bowl);
       printf("%s:%d",c.name,bat);
       if(bat==bowl){
         printf("\nWICKET..!!!\nEnd of Innings...\n\n-TOTAL-\n%s:%d\n",c.name,c.runs);
         printf("\n\n%s need %d runs to win\n\n",p.name,c.runs+1);
         first=c.runs;
         strcpy(batsman,p.name);
         break;
         }
       else if(bat>7||bat<0){
         bat=0;
         c.runs=c.runs+bat;
         }
       else
         c.runs=c.runs+bat;
     printf("\n\nSCORE:%d",c.runs);
       }
     }

    //Second batting
     printf("\nChasing batsman:%s",batsman);
     printf("\nLet's start the chase.\n");
     bat=0;
     bowl=-1;

     while(1){
     //If chasing is mine
       if(strcmp(batsman,p.name)==0){
         if(p.runs>c.runs)
           break;
         srand(time(0));
         bowl=(rand()%7)+0;
         printf("\n\n%s:",p.name);
         scanf("%d",&bat);
         printf("%s:%d",c.name,bowl);
         if(bat==bowl){
           printf("\nWICKET..!!!\nEnd of Innings...\n\n-TOTAL-\n%s:%d\n",p.name,p.runs);
           break;
          }
         else if(bat>7||bat<0){
           bat=0;
           p.runs=p.runs+bat;
           }
         else
           p.runs=p.runs+bat;
       printf("\n\nSCORE:%d\t\t",p.runs);
         if(((c.runs+1)-p.runs)>0)
            printf("Need %d runs to win",(c.runs+1)-p.runs);
         }

      //If chasing is system's
      else if(strcmp(batsman,c.name)==0){
        if(p.runs<c.runs)
           break;
        srand(time(0));
        bat=(rand()%7)+0;
        printf("\n\n%s:",p.name);
        scanf("%d",&bowl);
        printf("%s:%d",c.name,bat);
        if(bat==bowl){
          printf("\nWICKET..!!!\nEnd of Innings...\n\n-TOTAL-\n%s:%d\n",c.name,c.runs);
          break;
          }
        else if(bat>7||bat<0){
          bat=0;
          c.runs=c.runs+bat;
          }
        else
          c.runs=c.runs+bat;
      printf("\n\nSCORE:%d\t\t",c.runs);
         if(((p.runs+1)-c.runs)>0)
            printf("Need %d runs to win",(p.runs+1)-c.runs);
       }

     }

   //Finding the winner
   if(p.runs>c.runs)
     printf("\n%s wins.\nGlory to the Great %s...\n",p.name,p.name);
   else if(c.runs>p.runs)
     printf("\n%s wins.\nBetter Luck Next Time...\n",c.name);
   else if(p.runs==c.runs)
     printf("\nMatch Drawn...\n");
   else
     printf("\nNo Result.!!\n");

   //Do you want to play again
   printf("Do you want to play again.?\nIf yes press y.\nEnter any other key to exit..!\n>");
   scanf(" %c",&cho);
   if(cho=='y' || cho=='Y')
     main();
   else
     break;

   case 2:
     exit(0);

  }

}