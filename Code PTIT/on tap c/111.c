#include <stdio.h>
	int main(){
		int i;
		int n;
		scanf("%d",&n);
		int tong=0,tich=1;
		
		for(i=1;i<=n;i++){
			tich = tich * i;
			tong = tong + tich;
		}
		printf("%d",tong);
		return 0;
	}
