/*
Nguyen Quoc Cuong
B19DCCN085
15
6
D19CQCN01-B
*/

#include<stdio.h>
#include<conio.h>
int main ()
{
unsigned int a, b, c;
printf("Nhap so a: a=\n");scanf("%u", &a);
printf("Nhap so b: b=\n");scanf("%u", &b);
printf("Nhap so c: c=\n");scanf("%u", &c);
if(b+a>c && b+c>a && c+a>b && a>0 && b>0 && c>0)
{
	if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
		printf("a,b,c la 3 canh cua 1 tam giac vuong");
	else {
		if(a==b && a==c && b==c)
			printf("a,b,c la 3 canh cua 1 tam giac deu			");
		else {
			if(a==b || a==c || b==c)
				printf("a,b,c la 3 canh 1 tam giac can");
			else
				printf("a,b,c la 1 tam giac thuong");
		}
	}
}
else
		printf("a b c khong tao thanh 1 tam giac");
getch();
return 0;
}
 
