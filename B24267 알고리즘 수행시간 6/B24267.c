#define _CRT_SECURE_NO_WARNINGS // 2024.12.08 �˰��� ���� 6
#include <stdio.h>

int main(void) 
{
    long long int n = 0;
    long long int result = 0;

    scanf("%lld", &n);

    if (n == 1 || n == 2) {  // n�� 1 �Ǵ� 2�� ���
        printf("0\n4");
    }
    else {  // n�� 3 �̻��� ���
        result = ((n * (n - 1) * (n - 2)) / 6);
        printf("%lld\n3", result);  // ���� Ƚ���� ���� ���
    }

    return 0;
}