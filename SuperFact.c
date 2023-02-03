/*Program to find Super Factorial of a number
The super factorial of n is the product of the first n factorials.
ie, sf(n)=1!*2!*...*n! */

#include<stdio.h>

//This is a function to find the factorial of a number
int factorial(int n){
  int i;
  long fact=1;

  for(i=n;i>0;i--)
	  fact=fact*i;
	
  return fact;
}

int main(){
  int num,j;
  long supFact=1;
  printf("\n\nEnter the number:");
  scanf("%d",&num);

  for(j=num;j>0;j--)
	  supFact=supFact*factorial(j);
	
  printf("\n\nsf(%d) = %ld\n\n",num,supFact);
  return 0;
}


