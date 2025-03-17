//Write a C program to calculate the simple interest.
//Hint: principal*rate*time/100
#include<stdio.h>
int main();
float p,r,t,si;
{
  printf("enter the principle amount:");
  scanf("%d",&p);
  printf("enter the rate of interest:");
  scanf("%d",&r);
  printf("enter the time:");
  scanf("%d",&t);
  si=p*r*t/100;
  printf("the simple interest is %d",si);
  return 0;
}
 
