#include <stdio.h>

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

    putchar('\n');  // Print a newline at the end
    return 0;
}