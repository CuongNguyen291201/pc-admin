#include <stdio.h>

	int snt(int n){
		if(n<2) returcv
		n 0;
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
			b = b*10 + n%10;
			n/=10;
		}
		if(temp!=b) return 0;
		
		int dem=0;
		int i;
		for(i=2;i<n;i++){
			if(snt(i)==1){
				dem++;
				if(dem==3);
				break;
			}
		}
		if(dem==3) return 1;
		return 0;
	}
	
	int main(){
		int i;
		int a,b;
		scanf("%d %d",&a,&b);
		int dem=0;
		
		
		
		for(i=a;i<=b;i++){
			if(thuannghich(i))
			printf("%5d",i);
		}
	//	printf("%d",dem);
		return 0;
	}
