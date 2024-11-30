#include<stdio.h>
int main (){

	  FILE*file;
	  char data [500];
	  clrscr();
	  file =fopen("output.txt","r");
	  if(file==NULL){
	  printf("Error Opening the file !.\n");
	  return 1;
	  }
	  while(fgets(data,500,file)!=NULL){
	  printf("%s",data );

	  }
	  fclose(file);

	  return 0;
}
