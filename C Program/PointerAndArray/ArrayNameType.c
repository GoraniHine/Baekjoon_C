#include <stdio.h>

int main(void)
{
    int arr[3] = {0, 1, 2};
    printf("배열의 이름: %p \n", arr); // %p는 주소값 출력에 사용되는 서식문자이다.
    printf("첫 번째 요소: %p \n", &arr[0]);
    printf("두 번째 요소: %p \n", &arr[1]);
    printf("세 번째 요소: %p \n", &arr[2]);

    //arr = &arr[i] // 이 문장은 컴파일 에러를 일으킨다.

    return 0;
}