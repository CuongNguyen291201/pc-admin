#include <stdio.h>

	int thuannghich(int n){
		int temp = n;
		int b=0;
		while(n!=0){
			b = b*10+n%10;
			n/=10;
		}
		if(temp == b)
			return 1;
			
		return 0;
	}
	
	int chua6(int n){
		while(n!=0){
			if(n%10==6)
				return 1;
			n/=10;
		}
		return 0;
	}
	
	int co8(int n){
		int s=0;
		while(n!=0){
			s+=n%10;
			n/=10;
		}
		if(s%10==8)
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
			if(thuannghich(i) && chua6(i) && co8(i))
				printf("%d",i);
		}
		
		return 0;
	}
