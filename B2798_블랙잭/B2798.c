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

	for (int i = 0; i < N - 2; i++) // ī���� ������ ���� ����
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = (card[i] + card[j] + card[k]);

				if (M >= sum && sum > max) // M�� �ִ��� ����� ���� ã�´�
				{
					max = sum;
				}
			}
		}
	}

	printf("%d", max);

	return 0;
}