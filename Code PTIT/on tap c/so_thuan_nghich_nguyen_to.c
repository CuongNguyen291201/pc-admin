#include <stdio.h>

	int snt(int n){
		if(n<2) return 0;
		int i;
		for(i=2;i<n;i++){
			if(n%i==0) 
				return 0;
		}
		return 1;
	}
	
	int thuannghich(int n){
		int temp = n;
		int b=0;
		while(n!=0){
			b = b*10 +n%10;
			n/=10;
		}
		if(snt(temp)==1 && snt(b)==1 && temp!=b)
			return 1;
			
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
			if(thuannghich(i))
				printf("%d ",i);
		}
		
		return 0;
		
	}
