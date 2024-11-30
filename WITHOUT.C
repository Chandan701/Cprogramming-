#include<stdio.h>

int main (){
	    int length=0,i=0;
	    char str[100];
	    //int len =strlen(str);
	    printf("Enter a String:\n");
	    gets(str);

	    while(str[i]!=0){
		       length++;
		       i++;
	     }
	     printf("The Length of The String is %d\n",length);
	     return 0;
       }
