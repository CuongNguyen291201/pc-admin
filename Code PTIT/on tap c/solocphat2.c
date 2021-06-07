#include <stdio.h>

	int kts(int n){
		int du;
		while(n>0){
			du = n%10;
			if(du!=8 && du!=6 && du!=0)
			return 0;
			n = n / 10;
		}
		return 1;
	}

	int main(){
		int a;
		scanf("%d",&a);
		
		if(kts(a)==1)
		printf("1");
		else printf("0");
		
		return 0;
		
		
	}
