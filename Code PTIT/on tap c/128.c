#include <stdio.h>

	int snt(int n){
		if(n<2) return 0;
		int i;
		for(i=0;i<n;i++){
			if(n%i==0);
			return 0;
		}
		return 1;
	}

	int main(){
		int i;
		int a,b;
		scanf("%d %d",&a,&b);
		int temp;
		
		if(a>b){
			temp = a;
			a = b;
			b = temp;
		}
		
		for(i=a;i<=b;i++){
			if(snt(i)==1)
			printf("%d ",i);
		}
		
		return 0;
	}
