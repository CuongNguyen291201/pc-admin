#include <stdio.h>
 int main(){
 	int i, a[i];
 	int n; scanf("%d",&n);
 	
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	for(i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	
	printf("\nsap xep tu nho den lon: ");
	for(i=0;i<n;i++){
		int temp,j;
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	
	printf("%5d",a[i]);
   	}
   	
   	printf("\nsap xep tu lon den nho: ");
   	for(i=0;i<n;i++){
   		int temp,j;
   		for(j=i+1;j<n;j++){
   			if(a[i]<a[j]){
   				temp = a[i];
   				a[i] = a[j];
   				a[j] = temp;
			   }
		   }
		printf("%5d", a[i]);   
	   }
	return 0;
	
 }
