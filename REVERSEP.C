#include<stdio.h>
void main (){
	  int arr [5]={1,2,3,4,5},*ptr1,*ptr2,temp,i;
	  clrscr();
	  ptr1=arr;
	  ptr2=arr+4;

	  while(ptr1<ptr2){
			 temp=*ptr1;
			 *ptr1=*ptr2;
			 *ptr2= temp;
			 ptr1++;
			 ptr2--;
	   }
	   printf("Reverse Array :");
	   for(i=0;i<5;i++){
		      printf(" %d ",arr[i]);
		      }
	     }