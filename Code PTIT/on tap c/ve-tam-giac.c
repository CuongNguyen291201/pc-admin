#include <stdio.h>

	int main(){
		int h=3,c=5;
		int i,j;
		
		for(i=1;i<=3;i++){
			for(j=1;j<=5;j++){
				if((i==1 && (j!=3) || (i==2 && (j==1 || j==5)))){
				
				printf("   ");
				
			}
			
				else {
					
					printf(" * ");
				}
			}
			printf("\n");
		}
		return 0;
	}
