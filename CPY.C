#include<stdio.h>
#include<string.h>
void main (){
	  char str1[100],str2[100];
	  printf("Enter the String:");
	  gets(str1);

	  strcpy(str2,str1);
	  printf("Copied String :%s\n",str2);
	  }