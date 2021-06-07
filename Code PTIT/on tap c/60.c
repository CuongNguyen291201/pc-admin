#include <stdio.h>
 int main(){
 	int i,a[100];
 	int n;
 	scanf("%d",&n);
 	int p;
 	scanf("%d",&p);
 	
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	}
	
	for(i=p;i<n;i++){
		a[i] = a[i+1];
	}
	
	for(i=0;i<n-1;i++){
		printf("%5d",a[i]);
	}
	
	return 0;
 }
