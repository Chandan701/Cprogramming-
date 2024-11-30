#include<stdio.h>
int main (){
	  FILE*file;
	  char data [500];
	  clrscr();
	  printf("Enter a Line to Append :\n");
	  gets (data);

	  file=fopen("output .txt","a");
	  if(file==NULL){
	  printf("Error Opening FIle!\n");
	   return 1;
	   }
	   fprintf(file,"\n%s ",data);
	   fclose(file);
	   printf("Line Append Successfully");
	   return 0;
     }