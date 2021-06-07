/*
Nguyen Quoc Cuong
B19DCCN085
15
6
D19CQCN01-B
*/

#include <stdio.h>
 int main()
 {
 	int a,b,c;
 	float S;
 	printf("Nhap a: "); scanf("%d", &a);
 	printf("Nhap b: "); scanf("%d", &b);
 	printf("Nhap c: "); scanf("%d", &c);
 	a != b; a != c; b != c;
 	S = (a*a)/(a-b)*(a-c) + (b*b)/(b-c)*(b-a) + (c*c)/(c-b)*(c-a) ;
 	printf("Ket qua:%f" , S);
 	return 0;
 	}
