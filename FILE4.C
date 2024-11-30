#include<stdio.h>
int main (){
	 FILE*file;
	 int lines=0;
	 char ch;
	 clrscr();
	 printf("Enter a Line to Append :\n");

	 file=fopen("C:\\TurboC3\\BIN\\output .txt ","rt");
	 if(file==NULL){
	 printf("Error Opening File !\n");
	 return 1;
	 }

	 while ((ch=fgetc(file))!=EOF){
	 putchar(ch);
	 if(ch=='\n'){
	 lines++;
	 printf("New line Found Current Count :%d\n",lines);
	 }
    }
	 fclose(file);
	 printf("Total Number of lines :%d\n",lines+1);
	 return 0;
}

