#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0;
	int m = 0, n = 0;

	scanf("%d", &a);
	scanf("%d %d", &m, &n);

	if (n > m)
	{
		if (n >= 2 * (m / a))
		{
			printf("%f", 2 * ((float)m / (float)a));
		}
		else
		{
			printf("%d", n);
		}
	}
	else
	{
		if (m >= 2 * (n / a))
		{
			printf("%f", 2 * ((float)n / (float)a));
		}
		else
		{
			printf("%d", m);
		}
	}
}