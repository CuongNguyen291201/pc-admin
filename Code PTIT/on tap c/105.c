#include <stdio.h>
	
	int main(){
		int i,a[100];
		int n;
		scanf("%d",&n);
		
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		
		int p;
		scanf("%d",&p);
		
		for(i=p;i<n;i++){
			a[i-1]=a[i];
		}
		for(i=0;i<n-1;i++){
			printf("%d ",a[i]);
		}
		return 0;
	}
