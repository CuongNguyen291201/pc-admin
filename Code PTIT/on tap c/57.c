#include <stdio.h>
 int main(){
 	int i,a[i];
 	int n;
 	scanf("%d",&n);
 	int max,second;
 	
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
   	}  
	
	printf("\n");
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	for(i=0;i<n;i++){
		if(second<a[i] && a[i] < max){
			second = a[i];
		}
	}
	printf("%d",second);
	
	return 0;
 }
