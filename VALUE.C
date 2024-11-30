#include<stdio.h>
//Function Returning a Value

//Function declaration with return type
int multiply(int x,int y);

int main ()  {
	    int result=multiply(4,3);//Function Call With Return value

	    printf("multiplication result :%d\n",result);

	    return 0;
	    }
//Function Definition With Parameters
int multiply(int x,int y);     {
	  return x*y;//returning the result of multiplication
	  }
