#include<stdio.h>
#include<string.h>
void main (){
       char str1[100],str2[100];
       clrscr();
       printf("Enter a first string :");
       gets(str1);
       printf("Enter a second string :");
       gets(str2);
       strcat(str1,str2);
       printf("Conicated string:%s\n",str1);
       }