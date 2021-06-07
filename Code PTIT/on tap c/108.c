#include <stdio.h>

	int main(){
		int a;
		scanf("%d",&a);
		int i;
		
		for(i=0;i<a;i++){
			if(i%2==0){
				printf("so chan:%d \n",i);
				
			}
			
			else printf("so le:%d \n",i);
		}
		
		return 0;
	}
