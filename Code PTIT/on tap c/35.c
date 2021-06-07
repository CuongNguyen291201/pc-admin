#include <stdio.h>
 int main(){
 	int i,n,x; scanf("%d",&n); scanf("%d",&x);
 	int s= 100;
 	
 	for(i=2;i<=n;i++){
 		s = s+ (x/i);
	 }
	printf("%d",s);
	
	return 0;
 }
