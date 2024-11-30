#include<stdio.h>
void main(){
      char str[100],ch;
      int i=0,count=0;
      clrscr();
      printf("Enter  a String:");
      gets(str);

      printf("Enter a Character:");
      scanf("%c",&ch);

      while(str[i]!='\0'){
      if(str[i]==ch){
      count++;
      }
      i++;
      }
      printf("Frequency of %c :%d\n",ch,count);
      }