#include<stdio.h>
void main (){
	  int i;
	  clrscr();
	  int *arr=(int*)calloc(5,sizeof(int));
	  if(arr==NULL){
	  printf("Memory Allocation Failed \n");
	  return ;
	  }
	  printf("Array Elements after Calloc :\n");
	  for(i=0;i<5;i++){
	  printf(" %d ",arr[i]);
	  }
	  free(arr);
	  }