#include <stdio.h>
	
	int main(){
		int i,j,a[100][100],b[100][100];
		for(i=0;i<n;i++){
		int n;
		scanf("%d",&n);
		
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				b[n-j-1][i] = a[i][j];
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%5d",b[i][j]);
			}
			printf("\n");
		}
		
		return 0;
	}
