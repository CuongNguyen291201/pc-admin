#include <stdio.h>
	int main(){
		int i,a[100];
		int n;
		scanf("%d",&n);
		int min,second;
		
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		
		for(i=0;i<n;i++){
			if(min>a[i]){
				min =a[i];
			}
			printf("%d",min);
		}
		
		
		
		
	}
