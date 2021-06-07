#include <stdio.h>
 int main(){
 	int i,j,a[10][10], h, c, sum=0;
 	
 	printf("so hang ma tran a: \n"); scanf("%d", &h);
 	printf("so cot ma tran a: \n"); scanf("%d",&c);
 	
 	for(i=0;i<h;i++){
 		for(j=0;j<c;j++){
 			printf("nhap phan tu a[%d][%d]: \n");
 			scanf("%d", &a[i][j]);
 			}
 		}
 	
 	for(i=0;i<h;i++){
 		for(j=0;j<c;j++){
 			if(i==j)
 			 sum = sum + a[i][j] ;
 			 }
 		}
	
	printf("tong duong cheo chinh la: \n"); 
	return (0);
	}
		 	 
