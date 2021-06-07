#include <stdio.h>
	int main(){
		int n;
		scanf("%d",&n);
		
		int snd=0;
		while(n>0){
		
			int du = n%10;
			snd = snd * 10 + n%10 ;	
			n = n/10;

	}
		printf("%d",snd);
	}
