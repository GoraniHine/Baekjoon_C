#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0, low_value = 1, high_value = 0;
	int list[50] = {0};

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int number = 0;
		scanf("%d", &number);

		list[i] = number;
	}

	for (int i = 0; i < N - 1; i++) // 버블정렬
	{
		for (int j = 0; j < N - 1 - i; j++)
		{	
			if (list[i] != 0 && list[j] != 0 && list[j] > list[j + 1])
			{
				int temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

	/*for (int i = 0; i < 50; i++)
	{
		printf("%d", list[i]);
	}*/

	low_value = list[0];
	high_value = list[N - 1];

	printf("%d", low_value * high_value);

	return 0;
}