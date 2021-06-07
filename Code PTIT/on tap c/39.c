#include <stdio.h>
 int main(){
 	float a,b,c;
 	scanf("%f",&a);
 	scanf("%f",&b);
 	scanf("%f",&c);
 	
 	if(a>b & a>c) printf("%10f",a);
 	if(b>a & b>c) printf("%10f",b);
 	if(c>a & c>b) printf("%10f",c);
 	
 	return 0;
 }
