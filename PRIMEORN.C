#include<stdio.h>
int main (){
      int i,num,isprime=1;
      clrscr();
     printf("Enter the number:\n");
	   scanf("%d",&num);
      for(i=2;i<=num/2;i++);{
	  if(num%i==0){
	  isprime =0;

 }
	  }
      if(isprime&&num>1){
		printf("%d is a prime number\n",num);
		}else{
		printf("%d is not a prime number\n",num);
			}
	  return 0;
     }