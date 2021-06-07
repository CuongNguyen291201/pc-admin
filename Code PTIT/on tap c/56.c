#include <stdio.h>
 int main(){
 	int i,a[i];
 	int n; 
 	scanf("%d",&n);
 	int check =1;
 	
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }

	for(i=0;i<n;i++){
		if(a[i]!=a[n-i-1]){
			check =0;
			break ;
		}
	}
		if(check==1) printf("\n1");
		else printf("\n0");

	return 0;
 }
