#include<stdio.h>
int main (){
	FILE *file;
	char data[500];
	clrscr();

	printf("Enter Data To Write To The File \n");
	gets(data);

	file=fopen("output .txt ","w");
	if(file==NULL){
	     printf("Error Opening File !\n");
	     return 1;
	}
	fprintf(file," %s ",data);
	fclose(file);

	printf("Data Written To File Successfully \n");
	return 0;
}