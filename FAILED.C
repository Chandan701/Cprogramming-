#include<stdio.h>
void main (){
	 int *ptr=(int*)malloc(100000000*sizeof(int));
	 clrscr();
	 if(ptr==NULL){
	 printf("memory allocation failed\n");
	 }else{
	 printf("memory allocation succeeded\n");
	 free(ptr);
	 }
   }