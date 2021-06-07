#include <stdio.h>
	
	int ktsnt(int n){
		if(n<2) return 0;
		int i;
		for(i=2;i<n;i++){
			if(n%i==0)
			return 0;
		}
		return 1;
	}
		
	int main(){
		int i,a,b;
		scanf("%d",&a);
		scanf("%d",&b);
		int temp;
		
		if(a>b){
			temp = a;
			a = b;
			b = temp;
		}
		
		for(i=a;i<=b;i++){
			if(ktsnt(i)==1){
				printf("%d ",i);
			}
		}
		
		return 0;
	}
