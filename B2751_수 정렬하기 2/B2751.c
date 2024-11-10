#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N = 0, x = 0;
	//int list[1000000];

	scanf("%d", &N);

	int* list = (int*)malloc(2000000 * sizeof(int));

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &x);
		list[i] = x;
	}

	for (int i = 1; i < N; i++) //»ðÀÔÁ¤·Ä
	{
		int key = list[i];
		int j = i - 1;

		while (j >= 0 && list[j] > key)
		{
			list[j + 1] = list[j];
			j--;
		}

		list[j + 1] = key;
	}

	for (int i = 0; i < N; i++)
	{
		printf("%d\n", list[i]);
	}

	free(list);

	return 0;
}