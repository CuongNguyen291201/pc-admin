#include <stdio.h>
int main(){
	int a[10][10], i,j, size, temp;
	
	printf("nhap kich co ma tran: \n"); scanf("%d", &size);
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d", &a[i][j]);
			}
		}
	
	for(i=0;i<size;i++){
		printf("\n");
		for(j=0;j<size;j++){
			printf("%d\t", a[i][j]);
			}
		}
	
	for(i=1;i<size;i++){
		for(j=0;j<size;j++){
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
			}
		}
	
	for(i=0;i<size;i++){
		printf("\n");
		for(j=0;j<size;j++){
			printf("ma tran chuyen vi la: %d", a[i][j]);
			}
		}
	
	return (0);
	}
	
