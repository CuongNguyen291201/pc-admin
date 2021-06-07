#include<stdio.h>

	int snt(int n){
		if(n<2) return 0;
		int i;
		for(i=2;i<n;i++){
			if(n%i==0)
			return 0;
		}
		return 1;
	}
	
	int csnt(int n){
		while(n){
		int du = n %10;
		if(du!=2 && du!=3 && du!=5 && du!= 7)
		return 0;
		n/=10;
		}
		return 1;	
	}
	
	int tcsnt(int n){
		int s=0;
		while(n){
			s = s + n%10;
			n/=10;
		}
		if(snt(s)) return 1;
		
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
		
		int dem=0;
		for(i=a;i<=b;i++){
			if(snt(i) && csnt(i) && tcsnt(i))
				dem++;
		}
		printf("%d",dem);
		
		return 0;
	}
