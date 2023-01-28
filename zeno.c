#include<stdio.h>
#include<unistd.h>
void main(){
long double length,jump,i,sum=0.0;
printf("\nEnter the total length:");
scanf("%Lf",&length);
for(i=length/2;sum<=length;i=i/2){
  sum=sum+i;
  printf("\n%Lf",i);
  sleep(1);
  }
} 
