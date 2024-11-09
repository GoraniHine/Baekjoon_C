#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N = 0, now = 0;
int list[1000000] = { 0 };

int main(void)
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int num = 0, value = 0;

		scanf("%d", &num);

		if(num == 1)
		{
			scanf("%d", &value);
			list[now] = value;
			now++;
		}
		else if(num == 2)
		{
			if (now == 0)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", list[now - 1]);
				now--;
			}
		}
		else if(num == 3)
		{
			printf("%d\n", now);
		}
		else if (num == 4)
		{
			if (now == 0)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		else if (num == 5)
		{
			if (now == 0)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", list[now - 1]);
			}
		}
	}

	return 0;
}