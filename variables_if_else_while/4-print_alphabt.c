#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        if (ch != 'e' && ch != 'q')
        {
            putchar(ch);
        }
    }

    putchar('\n');
    return 0;
}
