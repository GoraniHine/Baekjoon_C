#include <stdio.h>

void ShowArrayElem(int * parem, int len)
{
    int i;

    for(int i = 0; i < len; i++)
    {
        printf("%d ", parem[i]);
    }

    printf("\n");
}

void AddArrayElem(int * parem, int len, int add)
{
    int i;
    
    for(int i = 0; i < len; i++)
    {
        parem[i] += add;
    }
}

int main(void)
{
    int arr[3] = {1, 2, 3};

    AddArrayElem(arr, sizeof(arr) / sizeof(int), 1);
    ShowArrayElem(arr, sizeof(arr) / sizeof(int));

    AddArrayElem(arr, sizeof(arr) / sizeof(int), 2);
    ShowArrayElem(arr, sizeof(arr) / sizeof(int));

    AddArrayElem(arr, sizeof(arr) / sizeof(int), 3);
    ShowArrayElem(arr, sizeof(arr) / sizeof(int));

    return 0;
}