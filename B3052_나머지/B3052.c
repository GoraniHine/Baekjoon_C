#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 0, stack = 0;
	int list[10] = { 0 };
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &list[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		stack = 0;

		for (int j = 0; j < i; j++) { // 현재까지의 수만 비교
			if ((list[i] % 42) == (list[j] % 42)) {
				stack = 1; // 중복된 경우
				break;
			}
		}

		if (stack == 0) { // 중복되지 않은 경우
			number++;
		}
	}

	printf("%d", number);

	return 0;
}