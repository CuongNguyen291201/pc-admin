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
 	float a,b,c,A,B,C; // a: do dai canh BC, b: do dai canh AC, c: do dai canh AB //
 	printf("Nhap canh a: "); scanf("%f", &a);
	printf("Nhap canh b: "); scanf("%f", &b);
	printf("Nhap canh c: "); scanf("%f", &c);
 	
 	A = acos((b*b+c*c-a*a)/(2*b*c));
 	B = acos((a*a+c*c-b*b)/(2*a*c));
 	C = acos((b*b+a*a-c*c)/(2*a*b));
 	
 	printf("Goc A: %f", A);
 	printf("\nGoc B: %f", B);
 	printf("\nGoc C: %f", C);
 	return 0;
 	}
 	
