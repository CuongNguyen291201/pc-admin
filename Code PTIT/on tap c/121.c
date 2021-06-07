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
	int tatca(int n){
	 	int du;
	 	int s;
	 	while(n!=0){
	 		du = n%10;
			s += du;
			n/=10;
	 	}
		if(snt(du)==1 && snt(s)==1 )return 1;
		
		return 0;
	}
	
	
	
	
	
	int main(){
		int i;
		int a,b;
		scanf("%d %d",&a,&b);
		int dem;
		for(i=a;i<=b;i++){
			if(tatca(i)==1)
			dem++;
		}
		printf("%d",dem);
		
		return 0;
	}
	


