#include<stdio.h>
int main ()
{
int number;
printf("Enter number");
scanf("%d",&number);
if(number % 2 == 0)
printf("The numberis Even\n");
else
printf("You entered odd number\n");
return 0;
}