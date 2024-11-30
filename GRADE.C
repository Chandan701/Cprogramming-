#include<stdio.h>
int main ()
{
int marks;
printf("enter the marks :");
scanf("%d",&marks);
if(marks>=90){
printf(" grade is A\n");
}else if(marks>=75){
printf(" grade is B\n");
}else if(marks>=60){
printf(" grade is c\n");
}else{
printf("better luck next time ");
}return 0;
}