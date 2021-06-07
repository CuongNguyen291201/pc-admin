#include <stdio.h>
#include <stdbool.h>

 bool isPrime(int number)
{
	if (number < 2) return false;
	int i;
	for (i = 2; i*i <= number; i++)
	{
		if (number % i == 0) return false;
	} 
	return true;
}

bool isGoodNumber(int number)
{
	int i;
	if (number < 2) return false;
	for (i = 2; i <= number; i++)
	{
		if (isPrime(i) && (number % i == 0) && (number % (i*i) != 0))
			return false;
	}
	return true;
}

int main()
{
	int a, b, i;
	scanf("%d%d", &a, &b);
	for (i = a; i <= b; i++)
	{
		if (isGoodNumber(i))
			printf("%d ", i);
	}

	return 0;
}
