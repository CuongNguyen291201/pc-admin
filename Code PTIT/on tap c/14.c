#include <stdio.h>
 int main(){
 	int i,j, a[10][10],  b[10][10], c[10][10];
 	int h1,c1,h2,c2;
 	scanf("%d",&h1); scanf("%d",&c1); scanf("%d",&h2); scanf("%d",&c2);
 	
 	if(h1 != h2 || c1 != c2){
 		printf("2 ma tran khong cung kich thuoc");
 		exit(0);
	 }
	
	for(i=0;i<h1; i++){
		for(j=0;j<c1;j++){
			printf("ma tran a[%d][%d]\n", i,j); scanf("%d", &a[i][j]);
		}
    }
    
    for(i=0;i<h2;i++){
    	for(j=0;j<c2;j++){
    		printf("ma tran b[%d][%d]\n", i,j); scanf("%d", &b[i][j]);
		}
	}
	
	for(i=0;i<h1;i++)
	   for(j=0;j<c1;j++){
	   	c[i][j] = a[i][j] - b[i][j];
	   }
	printf("%d\t", c[i][j]);
	
 	return 0;
 }
