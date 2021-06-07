#include <stdio.h>
int n,OK=0;B[20]={0};
void xuly(){
	for(int i=0;i<n;i++)
		printf("%d ",B[i]);
	printf("\n");
	
}
void sinhkt(){
	int i=n;
	while(B[i]==1){
		B[i]=0;
		i--;
	}
	if(i==0) OK=1;
	else B[i]=1;
	
}
main{
	
}
