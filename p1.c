#include<stdio.h>
int main()
{
  int first,second,add,sub,multiplication,divide,average;
  printf("Enter the first numbers:");
  scanf("%d",&first);
  printf("enter second number: ");
  scanf("%d",&second);
  
  add=first+second;
  sub=first-second;
  multiplication=first*second;
  divide=first/second;
  average=(first+second)/2;
  printf("addition of two numbers is %d\n",add);
  printf("subtraction of two numbers is %d\n",sub);
  printf("multiplication of two numbers is %d\n",multiplication);
  printf("division of two numbers is %d\n",divide);
  printf("average of two numbers is %d\n",average);
  return 0;
    
}
   
