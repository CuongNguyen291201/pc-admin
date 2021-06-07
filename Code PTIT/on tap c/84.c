#include <stdio.h>
	int main(){
		int i,a[100];
		int n;
		scanf("%d",&n);
		
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int min = a[0];
		int min2 = a[0];
		
		for(i=0;i<n;i++){
			if(min>a[i]){
				min = a[i];
			}
			if(min2>a[i] && min2>min){
				min2 = a[i];
			}
		}
		printf("%d",min);
		printf("\n%d",min2);
		
		return 0;
	}
