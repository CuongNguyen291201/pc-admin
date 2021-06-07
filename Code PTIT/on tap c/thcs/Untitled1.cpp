#include <stdio.h>
#
 int main(){
 	int i, j, a1[10][10], a2[10][10], a3[10][10];
 	int h1, c1, h2, c2;
 	
 	printf("nhap so hang cua a1: \n"); scanf("%d",&h1);
 	printf("nhap so cot cua a1: \n"); scanf("%d",&c1);
 	printf("nhap so hang cua a2: \n"); scanf("%d",&h2);
 	printf("nhap so cot cua a2: \n"); scanf("%d",&c2);
 	
 	if(h1 != h2 || c1 != c2){
 		printf("2 ma tran khong cung kich co \n");
 		return (0);
 		}
 	
 	for(i=0;i<h1;i++){
 		for(j=0;j<c1;j++){
 			printf("nhap phan tu a[%d][%d]: ", i,j);
 			scanf("%d", &a1[i][j]);
 			}
 		}
 	
 	for(i=0;i<h2;i++){
 		for(j=0;j<c2;j++){
 			printf("nhap phan tu a[%d][%d]: ", i,j);
 			scanf("%d", &a2[i][j]);
 			}
 		}
 	
 	for(i=0;i<h1;i++){
 		for(j=0;j<c1;j++){
 			a3[i][j] = a1[i][j] - a2[i][j] ;
 			printf("%d\t", a3[i][j]);
 			printf("\n");
 			}
 		}
 	
 	return (0);
 	}
 	
