#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, a = 1, x = 1;

int pibonacchi(n)
{
	int temp = 0;
	temp = x;
	x += a;
	a = temp;

	if (n == 1)
	{
		printf("%d", x);
		
		return 0;
	}

	return pibonacchi(n - 1);
}

int main(void)
{
	scanf("%d", &n);
	
	if (n == 0)
	{
		printf("0");
	}
	else if (n == 1 || n == 2)
	{
		printf("1");
	}
	else
	{
		pibonacchi(n - 2);
	}

	return 0;
}