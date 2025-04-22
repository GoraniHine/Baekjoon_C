#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, M, sum, max = 0;
	int card[100];

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &card[i]);
	}

	for (int i = 0; i < N - 2; i++) // 카드의 조합을 전부 구함
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = (card[i] + card[j] + card[k]);

				if (M >= sum && sum > max) // M에 최대한 가까운 수를 찾는다
				{
					max = sum;
				}
			}
		}
	}

	printf("%d", max);

	return 0;
}