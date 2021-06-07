#include <stdio.h>
 int main(){
 	int i,a[i];
 	int n;
 	scanf("%d",&n);
 	int p;
 	scanf("%d",&p);
 	int x;
 	scanf("%d",&x);
 	
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	
	for(i=n;i>p;i--){
		a[i]=a[i-1];
	}
	a[p]=x;
	for(i=0;i<n+1;i++){
		printf("%5d",a[i]);
	}
	
		

 	return 0;
 	
 }
