#include <stdio.h>

	int main(){
		int i,j;
		int n;
		scanf("%d",&n);
		int k=1;
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(j>=k){
				printf("*");
			   	}
			   	else printf(" ");
			}
			printf("\n");
			k++;
		}
	}
