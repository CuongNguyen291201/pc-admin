#include <stdio.h>

	int snt(int n){
		int i;
		int res=0;
		for(i=2;i<n;i++){
			for(n%i==0){
				int dem =0;
				while(n%i==0){
					n/=i;
					dem++;
				}
				if(dem<2)
				return 0
				else res=1
			}
		}
		if(n>1)
		return 0;
		
		return res;
	}
	
	
