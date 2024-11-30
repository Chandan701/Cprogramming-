#include<stdio.h>
void main (){
	    int *ptr=(int *)malloc(sizeof(int));
	    clrscr();
	    *ptr=10;
	    printf("Value %d \n",*ptr);
	    free(ptr);
	    }