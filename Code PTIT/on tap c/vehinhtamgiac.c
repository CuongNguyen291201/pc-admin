#include <stdio.h>
	int main(){
	
	int i,j;
	int n;
	scanf("%d",&n);
	int a=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
		
			printf("%5d",a);
			a++;
	}
	printf("\n");}
	return 0;
}
