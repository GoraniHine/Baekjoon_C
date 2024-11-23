#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0;
	int bee = 1;
	scanf("%d", &N);

	if (N == 1)
	{
		printf("1");

		return 0;
	}

	for (int i = 1; i < N; i++)
	{
		bee += i * 6;

		if (bee >= N)
		{
			printf("%d", i + 1);
			break;
		}
	}
}