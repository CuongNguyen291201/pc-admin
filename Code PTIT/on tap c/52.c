#include <stdio.h>
 int main(){
 	int i,j,a[100][100];
 	int n;
 	scanf("%d",&n);
 	int s=0;
 	
 	for(i=1;i<=n;i++){
 		for(j=1;j<=n;j++){
 			printf("a[%d][%d] ",i,j);
 			scanf("%d",&a[i][j]);
		 }
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
		printf("%d\t", a[i][j]);
	  	}
	  	printf("\n");
	}
	
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			int check=1;
			
			if(i>j){
				
				s= s+ a[i][j];
			}
		}
	}
	printf("\ntong tam giac duoi la: %d",s);
	
	
		 
  	return 0;
 }
