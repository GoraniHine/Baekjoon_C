#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int list[100000] = {0};
int add_num = 0, number = 0, x = 0;

int main(void)
{
	int k = 0;

	scanf("%d", &k);
	
	for(int i = 0; i < k; i++)
	{
		number = 0;
		scanf("%d", &number);

		if (x > 0 && number == 0)
		{
			list[x - 1] = 0;
			x--;
		}
		else if(number > 0)
		{
			list[x] = number;
			x++;
		}
	}

	for(int i = 0; i < k; i++)
	{
		add_num += list[i];
	}

	printf("%d",add_num);

	return 0;
}