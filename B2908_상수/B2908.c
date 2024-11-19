#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	a = reverse(a);
	b = reverse(b);

	if (a > b)
	{
		printf("%d", a);
	}
	else
	{
		printf("%d", b);
	}
	
}

int reverse(int a)
{
	int b;
	b = (a % 10) * 100;
	b += ((a / 10) % 10) * 10;
	b += (a / 100);
	return b;
}