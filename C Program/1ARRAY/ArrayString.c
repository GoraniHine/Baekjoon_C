#include <stdio.h>

int main(void)
{
    char str[] = "Good morning!";
    printf("배열 str의 크기: %d \n", sizeof(str));
    printf("널 문자 문자형 출력: %c \n", str[13]);
    printf("널 문자 정수형 출력 %d \n", str[13]);

    str[12] = '?'; // 배열 str에 저장된 문자열 데이터는 변경 가능
    printf("문자열 출력: %s \n", str);

    char nu = '\0';
    char sp = ' ';
    printf("%d %d", nu, sp); // 널 문자의 아스키 코드 값은 0 공백은 32

    return 0;
}