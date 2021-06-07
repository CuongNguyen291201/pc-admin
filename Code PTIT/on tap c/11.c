#include <stdio.h>
   int main(){
   	int a[10]= {3,25,6,3,88,25,2,6,46,29};
   	int i, max = a[0];
   	for(i=0;i<=9;i++){
   		if(max < a[i]){
   			max = a[i];
		   }  
	   }
	printf("phan tu lon nhat la: %d", max); 
   	return 0;
   }
