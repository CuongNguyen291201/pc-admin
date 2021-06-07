#include <stdio.h>

	int ktsnt(int n){
		if(n<2) return 0;
		int i;
		for(i=2;i<n;i++){
			if(n%i==0) return 0;
		}
		return 1;
	}
	
	int tinh(int n){
		int j;
		for(j=1;j<n;j++){
			if(ktsnt(j)==1 && n%j==0 && n%(j*j)==0)
			return 1;
		}
		return 0;
	}	

	int main(){
		int i;
		int a,b;
		scanf("%d",&a);
		scanf("%d",&b);
		int temp;
		
		if(a>b){
			temp = a;
			a = b;
			b = temp;
	}
		
		for(i=a;i<=b;i++){
			if(tinh(i)==1)
			printf("%d ",i);
		}
		return 0;
	}
