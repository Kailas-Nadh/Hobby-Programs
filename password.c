#include<stdio.h>
#include<stdlib.h>
#include<curses.h>

void main(){
char ch;
int i;
printf("Enter password:");
for(i=0;i<6;i++){
	ch=getchar();
	printf("*");
	}
}
