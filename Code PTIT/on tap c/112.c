#include <stdio.h>
	int main(){
		int i;
		int n;
		scanf("%d",&n);
		int dem=0;
		
		for(i=1;i<n;i++){
			if(n%i==0){
			dem++;
			printf("%d ",i);
			}
			
		}
		printf("\n%d", dem);
		
		return 0;
		
	}
