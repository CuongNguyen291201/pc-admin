#include <stdio.h>
  int main(){
  	int a,b;
  	scanf("%d",&a); scanf("%d",&b);
	int temp;
	
	
		temp =a ;
		a=b;
		b = temp;

	printf("%d\n",a);
	printf("%d",b);
	
	return 0;
	
  }
