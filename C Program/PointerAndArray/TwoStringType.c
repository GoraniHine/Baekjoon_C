#include <stdio.h>

int main(void)
{
    char str1[] = "My String"; // 변수 형태의 문자열
    char * str2 = "Your String"; // 상수 형태의 문자열
    printf("%s %s \n", str1, str2);

    str2 = "Our String";
    printf("%s %s \n", str1, str2);

    str1[0] = 'X';
    // str2[0] = 'X'; 상수형태의 문자열이기에 변경이 불가능하다.
    printf("%s %s \n", str1, str2);

    return 0;
}