#include <stdio.h>
 int main(){
 	int i,n; scanf("%d",&n);
 	int s=0;
 	
 	for(i=1;i<=n;i++){
 		s = s + i*(i+1);
	 }
	printf("%d", s);
	return 0;
	
 }
