#include<stdio.h>
#include<string.h>
void main(){
	     char str1[100],str2[100];
	     clrscr();
	     printf("Enter a first string:");
	     gets(str1);
	     printf("Enter second string :");
	     gets(str2);
	     if(strcmp(str1,str2)==0){
	     printf("Strings are identical .\n");
	     }else{
	     printf("Strings are non identical .\n");
	     }
	     }