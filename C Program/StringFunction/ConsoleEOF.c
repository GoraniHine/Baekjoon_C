#include <stdio.h>

int main(void)
{
    int ch;

    while(1)
    {
        ch = getchar();
        if(ch == EOF) // end of file [ctrl z]
        {
            break;
        }
        putchar(ch); 
    }

    return 0;
}