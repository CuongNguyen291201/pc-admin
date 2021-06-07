#include <stdio.h>
 int main(){
 	int i,a[i];
 	int n; scanf("%d",&n);
 	int temp;
 	
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	for(i=0;i<n;i++){
		printf("%5d", a[i]);
	}
 	
 	printf("\nsap xep mang tu be den lon: ");
 	for(i=0;i<n-1;i++){
 		int j;
 		for(j=i;j<n;j++){
 			if(a[i]>a[j]){
 				temp = a[i],
 				a[i] = a[j],
 				a[j] = temp;
 				
			 }
		 }
		printf("%2d", temp);	
	 }
 	
 	return 0;
 }
