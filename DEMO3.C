#include<stdio.h>
//Function With Parameter


//Function Declaration
void addNumber(int a,int b);

int  main (){
	     addNumber(10,20);//function call with parameter
	     return 0;

    }
//Function Definition with Parameters
void addNumber(int a,int b){
	    int sum=a+b;
	    printf("sum of %d and %d is :%d\n",a,b,sum);
}
