#include <stdio.h>

	int tn(int n){
		int du,b=0;
		while(n!=0){
			du = n%10;
			b = du + b*10;
			n/=10;
		}
		return b;
	}

	int main(){
		int a;
		scanf("%d",&a);
		printf("%d",tn(a));
		
		return 0;
	}
