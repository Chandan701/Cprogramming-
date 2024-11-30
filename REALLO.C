#include<stdio.h>
void main(){
	 int i;
	 int *arr=(int *)malloc(3*sizeof(int));
	 clrscr();
	 if(arr==NULL){
	 printf("Memory Allocation Failed\n");
	 return ;
	 }
	 for(i=0;i<3;i++){
	 arr[i]=i+1;
	 }
	 arr=(int*)realloc(arr,5*sizeof(int));
	 for(i=3;i<5;i++){
	 arr[i]=i+1;
	 }
	 printf("Resize Array :\n");
	 for(i=0;i<5;i++){
	 printf(" %d ",arr[i]);
	 }
	 free(arr);
	 }