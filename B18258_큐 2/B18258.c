#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int N = 0, X = 0, index = 0, front_index = 0;
	int* list = (int*)malloc(2000000 * sizeof(int));
	//int list[2000000] = { 0 };
	char keyword[10];
	
	scanf("%d\n", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%s", keyword, 10);

		if (strcmp(keyword, "push") == 0)
		{
			scanf("%d", &X);
			list[index] = X;
			index++;
		}
		else if (strcmp(keyword, "pop") == 0)
		{
			if (index == front_index)
			{
				printf("-1\n");
				continue;
			}
			printf("%d\n", list[front_index]);
			front_index++;
		}
		else if (strcmp(keyword, "size") == 0)
		{
			printf("%d\n", index - front_index);
		}
		else if (strcmp(keyword, "empty") == 0)
		{
			if ((index - front_index) == 0)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		else if (strcmp(keyword, "front") == 0)
		{
			if ((index - front_index) == 0)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", list[front_index]);
			}
		}
		else if (strcmp(keyword, "back") == 0)
		{
			if ((index - front_index) == 0)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", list[index - 1]);
			}
		}
	}

	free(list);

	return 0;
}