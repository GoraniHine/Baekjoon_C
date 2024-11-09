#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0, x = 0, num = 0;
	scanf("%d", &N);

	for (int i = 0; i < N;)
	{
		x++;
		num = x;

		if (num % 1000 == 666)
		{
			i++;
			continue;
		}

		for (int j = 0; j < 5; j++)
		{
			num = num / 10;
			if (num % 1000 == 666)
			{
				i++;
				break;
			}
		}
	}

	printf("%d", x);

	return 0;
}
