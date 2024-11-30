#include<stdio.h>
int main (){
	   int arr[5],i,even=0,odd=0;
	       printf("Enter 5 Elements\n:");
	       for(i=0;i<5;i++){
			  scanf("%d",&arr[i]);
			  if(arr[i]%2==0){\
			  even++;
	}else{
		 odd++;
	}
  }
	printf("Even Numbers :%d\n",even);
	printf("Odd Numbers :%d\n",odd);
	return 0;
   }
