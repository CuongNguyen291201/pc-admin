/*
Nguyen Quoc Cuong
B19DCCN085
15
6
D19CQCN01-B
*/

#include <stdio.h>
#include <math.h>
 int main()
 {
 	float a,b,c,d,P,S;
 	printf("Nhap canh day nho a: "); scanf("%f", &a);
 	printf("Nhap canh ben b: "); scanf("%f", &b);
 	printf("Nhap canh day lon c: "); scanf("%f", &c);
 	printf("Nhap canh ben d: "); scanf("%f", &d);

    P = a+b+c+d ;
	S = (c+a)*sqrt(2*(d*d*b*b+d*d*(c-a)*(c-a)+b*b*(c-a)*(c-a)-(pow(d,4)+pow(b,4)+pow(c-a,4))))/(4*(c-a));
	
	printf("Chu vi: %f", P);
	printf("\nDien tich: %f", S);
	return 0;
	}
	
 	
