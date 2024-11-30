#include<stdio.h>

int main (){
	     int i;
	     char arr[3][10]={"Hi","Hello","XYZ"};
	     clrscr();
	     printf("String array Elements are :\n");
	     for(i = 0 ; i < 3 ; i ++){
	     printf("%s\n",arr[i]);
	     }
  return 0;
}
