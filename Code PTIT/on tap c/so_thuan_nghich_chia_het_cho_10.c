#include <stdio.h>
#include <math.h>
	int thuannghich(int n){
		int temp = n;
		int b=0;
		int sum=0;
		while(n!=0){
			b = b*10 + n%10;
			sum+=n%10;
			n/=10;
		}
		if(b==temp && sum%10==0)
		return 1;
		
		return 0;
	}

	int main(){
		int i;
		int n;
		scanf("%d",&n);
		int dem=0;
		
		for(i=pow(10,n-1);i<pow(10,n);i++){
			if(thuannghich(i))
				dem++;
		}
		printf("%d",dem);
		
		return 0;
	}
