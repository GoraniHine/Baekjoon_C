#include <stdio.h>

void SoSimpleFunction(void)
{
    printf("I'm so simple");
}

int main(void)
{
    int num = 20;
    void * ptr;

    ptr = &num;
    printf("%p \n", ptr);

    ptr = SoSimpleFunction;
    printf("%p \n", ptr);

    return 0;
}