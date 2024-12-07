#define _CRT_SECURE_NO_WARNINGS // 2024.12.08 알고리즘 수업 6
#include <stdio.h>

int main(void) 
{
    long long int n = 0;
    long long int result = 0;

    scanf("%lld", &n);

    if (n == 1 || n == 2) {  // n이 1 또는 2일 경우
        printf("0\n4");
    }
    else {  // n이 3 이상일 경우
        result = ((n * (n - 1) * (n - 2)) / 6);
        printf("%lld\n3", result);  // 수행 횟수와 차수 출력
    }

    return 0;
}