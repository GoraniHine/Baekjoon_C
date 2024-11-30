#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char x[16];
	char list[5][16] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		scanf("%15s", x);
		strcpy(list[i], x);
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (list[j][i] == '\0')
			{
				continue;
			}
			printf("%c", list[j][i]);
		}
	}

	return 0;
}