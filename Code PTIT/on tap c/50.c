#include <stdio.h>
  int kiemtrasonguyento(int a){
  	int i;
	if(a<2) return 0; 
  	for(i=2;i<a;i++){
  		if(a%i==0)
		return 0;
	}
	return 1;	
  } 
  
  
  int main(){
 	int i,a[i];
 	int n; 
 	scanf("%d",&n);
 	
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	
	printf("\n");
	printf("sap xep tu nho den lon: ");
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
	
	
	for(i=0;i<n;i++){
		if(kiemtrasonguyento(a[i])==1)
		printf("\nso nguyen to: %d",a[i]);
	}
	
	int  b[100];
	int j;
	for(i=0;i<n;i++){
		if(a[i])
	}	
	}
	
	
			
	
	
	
	return 0;
	
 }
