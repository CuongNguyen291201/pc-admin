#include <stdio.h>
 int main(){
 	int a,b,c;
 	scanf("%d",&a);
 	scanf("%d",&b);
 	
 	c= a*b;
 	while(a!=b){
 		if( a>b){
 			a=a-b;
		 }
		else{
			b=b-a;
		}
	}
	printf("UCLN:%d ",a);
	
	printf("BCNN:%d ",c/a);

    
    return 0;
    
	 }
