#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int count = 0;

    while (N >= 0)
    {
        if (N % 5 == 0)
        {
            count += N / 5;
            printf("%d\n", count);
            return 0;
        }
        N -= 3; // 5�� ������������ ���� 3kg������ �ϳ��� ���� count�� 1 ������Ų��
        count++;
    }

    printf("-1\n"); // �������ؼ� ���ڰ� ���� ��� -1�� ��� (�Ұ����� ��)
    return 0;
}