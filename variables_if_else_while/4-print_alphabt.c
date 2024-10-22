#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char aynur = 'a';

	while (aynur <= 'z')
	{
		if (aynur != 'q' && aynur != 'e')
		{
			putchar(aynur);
		}
		aynur++;
	}
	putchar('\n');
	return (0);

