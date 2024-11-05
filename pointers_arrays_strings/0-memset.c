#include "main.h"
#include <stdio.h>

/**
* _memset-fills
* 
* @s:area
* @b:byte
*
* 
* Return: char
*/

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;
	while (i < size)
	{
		if (i % 10)
		{
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
		i++;
	}

	printf("\n");
}
