#include <stdio.h>
 	int main(){
 		int i,j,a[100][100],b[100][100],c[100][100];
 		int n;
 		scanf("%d",&n);
 		
 		for(i=0;i<n;i++){
 			for(j=0;j<n;j++)
 				scanf("%d",&a[i][j]);
		 }
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
		}
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				c[i][j]=a[i][j]-b[i][i];
			}
		}
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%5d",c[i][j]);
			}
			printf("\n");
		}
		
		
		return 0;
	 }
