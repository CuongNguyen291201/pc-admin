#include <stdio.h>

	int snt(int n){
		int i;
		int res=0;
		for(i=2;i<n;i++){
			if(n%i==0){
				 int dem=0;
				while(n%i==0){
					n/=i;
					dem++;
				}
				if(dem<2) 
				return 0; 
				else res =1;
			}
		}
		if(n>1) 
		return 0;
		return res; 
	}
	
	int main(){
		int i;
		int a,b;
		scanf("%d %d",&a,&b);
		
		for(i=a;i<=b;i++){
			if(snt(i)==1)
				printf("%d ",i);
		}
		return 0;
	}
