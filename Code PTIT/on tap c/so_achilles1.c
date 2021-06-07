#include <stdio.h>

	int snt(int n){
		if(n<2) return 0;
		int i;
		for(i=2;i<n;i++){
			if(n%i)
			return 0;
		}
		return 1;
	}
	
	int kt(int a, int b){
		int i;
		for(i=a;i<=b;i++){
			int j;
			for(j=2;j<=10;j++){
				if(snt(j)==1){
					if( i%(j*j)==0)
					printf("%d ",i);
					break ;
				}
			}
		}
	}

	int main(){
		int a,b;
		scanf("%d",&a);
		scanf("%d",&b);
		
		kt(a,b);
		return 0;
		
	}
