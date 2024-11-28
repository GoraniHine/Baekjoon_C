#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, K, CoinSum = 0;
	int Coin[10] = { 0 };

	scanf("%d %d", &N, &K);

	for (int i = 0; i < N; i++)
	{
		int x = 0;
		scanf("%d", &x);

		Coin[i] = x;
	}

	for (int i = N; i > 0; i--)
	{
		CoinSum += K / Coin[i - 1];
		K = K % Coin[i - 1];
	}

	printf("%d", CoinSum);

	return 0;
}