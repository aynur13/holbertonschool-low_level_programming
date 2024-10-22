#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int num;

    for (num = 0; num < 10; num++)
    {
        putchar(num + '0');  // Convert integer to character
    }

    putchar('\n');  // Print a newline
    return (0);
}
