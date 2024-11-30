#include<stdio.h>
int main()
{
int num;
printf("enter the number ");
scanf("%d",&num);
if(num>0){
printf("%d is the positive\n");
}else if(num<0){
printf("%d is negative\n");
}else{
printf("%d is zero\n");
}return 0;
}
