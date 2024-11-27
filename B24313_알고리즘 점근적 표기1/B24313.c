#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, n;

	scanf("%d %d", &a, &b);
	scanf("%d", &c);
	scanf("%d", &n);

	for (int i = n; i < 101; i++)
	{
		if ((a * i) + b <= (c * i))
		{
			continue;
		}
		else 
		{
			printf("0 ");
			return 0;
		}
	}

	printf("1 ");
}