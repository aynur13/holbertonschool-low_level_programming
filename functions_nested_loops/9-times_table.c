#include "main.h"

/**
* times_table - prints the 9 times table
*/
void times_table(void)
{
    int i, j, product;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            product = i * j;

            if (j == 0)
            {
                /* Print the first number without leading space */
                _putchar(product + '0');
            }
            else
            {
                /* Print a comma and space before the next number */
                _putchar(',');
                _putchar(' ');

                /* Handle single-digit and double-digit numbers */
                if (product < 10)
                {
                    _putchar(' '); /* Add space for alignment */
                }
                _putchar(product + '0');
            }
        }
        /* Move to the next line after each row */
        _putchar('\n');
    }
}
