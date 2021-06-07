#include <stdio.h>
 int main(){
 	int a[10]={1,2,3,4,5,6,7,8,9,10};
 	int i, min;
 	
 	for(i=0;i<=9;i++){
 		if(min > a[i]){
 			min = a[i];
		 }
	 }
	printf("gia tri nho nhat la: %d", min);
	
 	return 0; 
 }
