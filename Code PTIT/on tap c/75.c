#include <stdio.h>
    int kiemtrasonguyento(int a){
    	if(a<2) return 0;
    	int i;
    	for(i=2;i<a;i++){
    		if(a%i==0) return 0;
		}
		return 1;
	}
    
 	int main(){
 		int i,j,a[100][100];
 		int n;
 		scanf("%d",&n);
 		int s;
 		
 		for(i=0;i<n;i++){
 			for(j=0;j<n;j++){
 				scanf("%d",&a[i][j]);
			 }
		 }
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(j>i&&kiemtrasonguyento(a[i][j])==1){
					printf("%5d",a[i][j]);
					s = s+a[i][j];
					}
				else printf("    *");	
				}
			printf("\n");
		
			
		}
			printf("%d",s);
			
		}
		
