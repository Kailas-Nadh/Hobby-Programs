#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>

//Function to display instructions
int Instructions(){
printf("\n\n\nVoice on instructions...\n\n");
return 0;
}

//Function to simulate navigation
int Navigation(){
char cho,location[20],option;
K:
system("clear");
printf("Navigation Mode...\n\n\n");
printf("(1.Instruction Set)\n(2.Swipe down for Read Mode)\n\n(Enter any other input to continue...)\n\nEnter your choice:");
scanf(" %c",&cho);
switch(cho){
	case '1': Instructions();
		  sleep(2);
		  goto K;
		  break;
	case '2': return 0;
	          break;
	default:  printf("\nWhere do we need to go.?\nEnter location:");
	          scanf(" ");
	          gets(location);
	          L:
	          printf("\n\n1.Move on with location\n2.Need further clarification\n3.Stop Navigating\n\nEnter choice:");
	          scanf(" %c",&cho);
	          if(cho=='2')
	          	printf("\n\nDetails:A very scenic spot..!!!\n\n");
	          else if(cho=='3')
	          	goto K;
	          else if(cho!='1'){
	          	printf("\nEnter valid input...\n\n");
	          	goto L;
	          	}
	          sleep(1);
	          M:
	          system("clear");
	          printf("Navigation Mode...\n\n\n");
	          printf("Navigation Ongoing...\n");
	          printf("Enter p to pause, c to cancel trip, e if destination reached.\n >");
	          scanf(" %c",&cho);
	          if(cho=='p' || cho=='P'){
	                N:
	                system("clear");
	                printf("Navigation Mode...\n\n\n");
	                printf("Navigation Paused...\n");
	                printf("Enter p to play, c to cancel trip.\n >");
	                scanf(" %c",&option);
	                if(option=='p' || option=='P')
	                	goto M;
	                else if(option=='c' || option=='C'){
	                       printf("\nCancelling...\n");
	                       sleep(1);
	                	goto K;
	                	}
	                else
	                	goto N;
	                }
	            else if(cho=='c' || cho=='C'){
	            	   printf("\nCancelling...\n");
	                  sleep(1);
	                  goto K;
	                  }
	            else if(cho=='e' || cho=='E'){
	            	     printf("\nReached destination...\n");
	            	     puts(location);
	                    sleep(1);
	                    goto K;
	                    }
	            else
	                goto M;
	 	  
	          break;
	     }     
return 0;
}

//Function to simulate read mode
int Read(){
char ch,text[10];
J:
system("clear");
printf("Read Mode...\n\n\n");
printf("(1.Instruction Set)\n(2.Swipe up for Navigation Mode)\n(3.Swipe down for Home page)\n\n(Enter any other input to continue...)\n\nEnter your choice:");
scanf(" %c",&ch);
switch(ch){
	case '1': Instructions();
		  sleep(2);
		  goto J;
		  break;
	case '2': Navigation ();
	          goto J;
	          break;
	case '3': return 0;
	          break;
	default : system("clear");
	          printf("Read Mode...\n\n");
	          printf("Enter text:");
	          scanf(" ");
	          gets(text);
	          sleep(2);
	          printf("\nThe text is:");
	          puts(text);
	          printf("\nDo you want to translate.?(y/n)");
	          scanf(" %c",&ch);
	          if(ch == 'y' || ch == 'Y'){
	          	printf("\nTranslation...\n");
	          	sleep(2);
	          	}
	          goto J;
	          break;
	}
	          


return 0;
}


int main(){
char choice;
system("clear");
printf("Margdeepthi app\nby Lexicons\n\n\n(Voice over...)\n\n\nCOVERPAGE........\n");
sleep(2);
I:
system("clear");
printf("Margdeepthi app\nby Lexicons\n\n1.Double tap for instructions\n2.Swipe Once(for Read Mode)\n3.Exit\n");
printf("Choose your option:");
scanf("%c",&choice);
switch(choice){
	case '1': Instructions();
	          sleep(2);
	          goto I;
	          break;
	case '2': Read ();
	          goto I;
	          break;
	case '3': printf("\nQuitting...\nBye...\n");
	          sleep(1);
	          exit(0);
	default:  printf("\n\nInvalid input...\n\n");
	          goto I;
	          break;
	} 
	
return 0;
}


