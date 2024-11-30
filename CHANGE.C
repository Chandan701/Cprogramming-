#include<stdio.h>

int main(){
	int num =10,*ptr;
	clrscr();
	ptr=&num;
	*ptr=20;
	printf("Upadated Value of num %d\n",num );
	return 0;
	}