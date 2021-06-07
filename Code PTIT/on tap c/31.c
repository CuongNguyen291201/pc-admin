#include <stdio.h>
 int main(){
 	int i,n; scanf("%d",&n);
 	int s1=0,s2=1,s3=1;
  	for(i=1;i<=n;i++){
  	 	s1 = s1 + i ;
  	 	s2 = s2 * i;
  	 	s3 = s3 + (2*i+1);
	}
  	
	  printf("%d\n",s1); 
	  printf("%d\n",s2);
	  printf("%d\n",s3);
	  
  
  	
  	return 0;
  	
 }
