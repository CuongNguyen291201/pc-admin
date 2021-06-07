#include <stdio.h>
	int main(){
		int i,j,a[100][100],b[100][100];
		int n;
		scanf("%d",&n);
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				b[n-i-1][n-j-1]=a[i][j];
			}
		}
		
		printf("\n");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}
		
		return 0;
		
	}
