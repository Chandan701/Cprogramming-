#include<stdio.h>
int main (){
      int i,num,rev=0;
      clrscr();
	printf("Enter the number:\n");
       scanf("%d",&num);
       for(;num!=0;num/=10){
	  rev=rev*10+num%10;
	  }

    printf("Reversed number=%d",rev);

      return 0;
  }