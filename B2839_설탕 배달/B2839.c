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
        N -= 3; // 5로 나눠질때까지 설탕 3kg봉지를 하나씩 빼며 count를 1 증가시킨다
        count++;
    }

    printf("-1\n"); // 끝까지해서 숫자가 남을 경우 -1을 출력 (불가능한 수)
    return 0;
}