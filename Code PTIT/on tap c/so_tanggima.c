#include <stdio.h>
#include <math.h>
	
	int snt(int n){
		if(n<2) return 0;
		int i;
		for(i=2;i<n;i++){
			if(n%i==0)
			return 0;
		}
		return 1;
	}

	int tang(int n){
		int du=n%10;
		n/=10;
		while(n!=0){
			if(du<=n%10)
				return 0;
			du=n%10;
			n/=10;
		}
		return 1;
	}
	
	int giam(int n){
		int du=n%10;
		n/=10;
		while(n!=0){
			if(du>=n%10)
				return 0;
			du = n%10;
			n/=10;
		}
		return 1;
	}
	
	int main(){
		int i;
		int n;
		scanf("%d",&n);
		int dem=0;
		
		for(i=pow(10,n-1);i<pow(10,n);i++){
			if(snt(i) &&( tang(i) || giam(i)))
				dem++;
		}
		printf("%d",dem);
		
		return 0;
	}
