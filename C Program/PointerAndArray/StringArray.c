#include <stdio.h>

int main(void)
{
    char * strArr[3] = {"Simple", "String", "Array"};
    printf("%s \n", strArr[0]);
    printf("%s \n", strArr[1]);
    printf("%s \n", strArr[2]);

    printf("%p \n", strArr[0]);
    printf("%p \n", strArr[1]);
    printf("%p \n", strArr[2]);

    return 0;
}