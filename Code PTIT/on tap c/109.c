#include <stdio.h>
	
	int main(){
		int i;
		int n;
		scanf("%d",&n);
		float s;
		
		for(i=1;i<=n;i++){
			s = s + (float)1/i;
		}
		printf("%f",s);
		
		return 0;
	}
