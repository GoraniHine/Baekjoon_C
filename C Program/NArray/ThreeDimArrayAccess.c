#include <stdio.h>

int main(void)
{
    int mean = 0, i, j;
    int record[3][3][2] = {
        {
            {70, 80}, // A 학급 학생 1의 성적
            {94, 90}, // A 학급 학생 2의 성적
            {70, 85}  // A 학급 학생 3의 성적
        },
        {
            {83, 90}, // B 학급 학생 1의 성적
            {95, 60}, // B 학급 학생 2의 성적
            {90, 82}  // B 학급 학생 3의 성적
        },
        {
            {98, 89}, // C 학급 학생 1의 성적
            {99, 94}, // C 학급 학생 2의 성적
            {91, 87}  // C 학급 학생 3의 성적
        }
    };

    for(i = 0; i < 3; i++)
        for(j = 0; j < 2; j++)
            mean += record[0][i][j];
    printf("A 학급 전체 평균: %g \n", (double)mean / 6);

    mean = 0;
    for(i = 0; i < 3; i++)
        for(j = 0; j < 2; j++)
            mean += record[1][i][j];
    printf("B 학급 전체 평균: %g \n", (double)mean / 6);

    mean = 0;
    for(i = 0; i < 3; i++)
        for(j = 0; j < 2; j++)
            mean += record[2][i][j];
    printf("C 학급 전체 평균: %g \n", (double)mean / 6);

    return 0;
}