#include <stdio.h>
 int main(){
 	int i,a[i];
 	int n; 
 	scanf("%d",&n);
 	int j,b[j];
 	int m;
 	scanf("%d",&m);
 	int p;
 	scanf("%d",&p);
 	
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	
	for(j=0;j<m;j++){
		scanf("%d",&b[j]);
	}
	
	for(i=p;i<n+m;i++){
		a[i+m]=a[i];
	}
	j=0;
	for(i=p;i<p+m;i++){
		a[i]=b[j];
		j++;
		
		}
	
	for(i=0;i<n+m;i++){
	printf("%5d",a[i]);
	}
	
 	return 0;
 }
