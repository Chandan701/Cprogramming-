#include<stdio.h>
int main (){
	  FILE*file;
	  clrscr();
	  file=fopen("output .txt","r");
	  if( file==NULL){
	  printf("File Does Not Exists \n");
	  }else{
	  printf("File Exists \n");
	  fclose(file);
	  }
	  return 0;
}