#include <stdio.h>

	int main(){
		int i,j;
		int n;
		scanf("%d",&n);
		char k='A';
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%c",k+i+j);
			}
			printf("\n");
		}
		return 0;
	}
