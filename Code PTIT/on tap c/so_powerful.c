#include <stdio.h>

	int snt(int n){
		if(n<2) return 0;
		int i;
		for(i=2;i<n;i++){
			if(n&i==0)
				return 0;
		}
		return 1;
	}
	
	int ktra(int n){
		int i;
		for(i=2;i<n;i++){
			if(snt(i)==1 && n%i==0 && n%(i*i)==0 )
			return 1;
		}
		return 0;
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
			if(ktra(i))
				printf("%d ",i);
		}
		return 0;
	}
