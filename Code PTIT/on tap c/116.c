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
		int i;
		int a,b;
		scanf("%d",&a);
		scanf("%d",&b);
		int j;
		
		for(j=a;j<=b;j++){
			for(i=a;i<=b;i++)
				if(ktsnt(i)==1 &&  j%(i*i)==0 && j%i==0  )
			printf("%d ",j);
		}
		
		return 0;
	}
