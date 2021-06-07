#include <stdio.h>
int main(){
	int n, a=0;
	scanf("%d",&n);
	int sochan=0,sole=0;
	
	while(n>10){
		a = n%10;
		n = n/10;
		if(a%2 == 0)
		  sochan++;
		else
		  sole++;
	}
	
	printf("so chan la: %d\n", sochan);
	printf("so le la: %d", sole);
	return 0;
	}
		  
