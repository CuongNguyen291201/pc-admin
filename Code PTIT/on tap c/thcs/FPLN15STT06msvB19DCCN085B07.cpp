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
	float x,y,S ;
	printf("Nhap x: "); scanf("%d", &x);
	printf("Nhap y: "); scanf("%d", &y);
	
	S = 2/3*x*y*(2*x*x*y-3*x/y)+2*(x-1)/(y*y-3) ;
	
	printf("Gia tri bieu thuc la: %f", S);
	return 0;
	}
	
