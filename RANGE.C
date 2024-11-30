#include<stdio.h>
int main ()
{
int num;
printf("enter the number ");
scanf("%d",&num);
if(num >= 10 && num <= 50){
printf("within a range ,\n");
}else{
printf("not in a range ,\n");
}
return 0;
}