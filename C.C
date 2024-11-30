#include<stdio.h>
int main ()
{
int number1,number2;
printf("enter two number:");
scanf("%d %d",&number1,&number2);
if(number1>number2)
printf("%d is larger \n",number1);
printf("%d is larger \n",number2);
return 0;
}