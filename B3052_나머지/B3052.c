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

		for (int j = 0; j < i; j++) { // ��������� ���� ��
			if ((list[i] % 42) == (list[j] % 42)) {
				stack = 1; // �ߺ��� ���
				break;
			}
		}

		if (stack == 0) { // �ߺ����� ���� ���
			number++;
		}
	}

	printf("%d", number);

	return 0;
}