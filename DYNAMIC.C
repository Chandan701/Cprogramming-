#include<stdio.h>
void main (){
	    int n,*arr,i;
	    clrscr();
	    printf("Enter Size of Array:");
	    scanf("%d",&n);


	    arr=(int*)malloc(sizeof(int));
	    for(i=0;i<n;i++){
	    arr[i]=i+1;
	    }
	    printf("Array:");
	    for(i=0;i<n;i++){
	    printf(" %d ",arr[i]);
	    }
	    free(arr);
	    }
