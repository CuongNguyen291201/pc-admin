#include <stdio.h>
int main(){
	int i,j,a[10][10],h,c,sum=0;
	
	printf("nhap so hang: \n"); scanf("%d",&h);
	printf("nhap so cot: \n"); scanf("%d",&c);
	
	for(i=0;i<h;i++){
	    for(j=0;j<c;j++){
	    	printf("nhap phan tu ma tran a[%d][%d]", i,j);
	    	scanf("%d", &a[i][j]);
	    	}
	    }
	
	for(i=0;i<h;i++){
		for(j=0;j<c;j++){
			sum = sum + a[i][j];
			}
		}
	
	printf("tong cac phan tu cua ma tran la: \n", sum);
	return 0;
	}
	
