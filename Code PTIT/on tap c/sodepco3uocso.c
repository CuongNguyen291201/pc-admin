#include <stdio.h>
#include <math.h>
int is_Prime(int n)
{	
	int i;
	if (n < 2) return 0;
	for (i = 2;i <= sqrt(n);i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}

int thuannghich(int n)
{
	int temp = n;
	int b = 0;
	while (temp != 0)
	{
		b = b * 10 + temp % 10;
		temp /= 10;
	}
	if (b != n) return 0;
	return 1;
}

int uoc(int n)
{
	int i;
	int dem = 0;
	for (i = 1;i <= n;i++)
	{
		if (n % i == 0 && is_Prime(i) == 1) {
			dem++;
			if (dem == 3) return 1;
		}
	}
	return 0;
}

int main() {
	int a;
	int i;
	scanf("%d",&a);
	int b;
	scanf("%d", &b);
	for ( i = a;i <= b;i++)
	{
		if (thuannghich(i) == 1 && uoc(i) == 1)  printf("%5d", i);
	}
	return 0;
}


