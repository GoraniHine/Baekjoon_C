#include <stdio.h>

int main(void)
{
    int arr[3] = {11, 22, 33};
    int * ptr = arr;
    printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

    printf("%d ", *ptr); ptr++;
    printf("%d ", *ptr); ptr++;
    printf("%d ", *ptr); ptr--;
    printf("%d ", *ptr); ptr--;
    printf("%d ", *ptr); printf("\n");

    // *(++ptr) = 20; ptr의 주소값을 증가시킴
    // *(ptr + 1) = 20; ptr + 1인 주소의 값을 변경함

    return 0;
}