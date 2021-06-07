#include <stdio.h>
 int main(){
 	int a,b,c;
 	scanf("%d",&a); scanf("%d",&b); scanf("%d",&c);
 	int temp;
 	
 	temp = a;
 	a = b;
 	b = c;
 	c = temp;
 	
 	printf("%d\n",a);
 	printf("%d\n",b);
 	printf("%d",c);
 	
 	return 0;
 	
 }
