#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char aynur = 'a';
	int a = 0;

	while (a < 10)
	{
		while (aynur <= 'z')
		{
			_putchar(aynur);
			aynur++;
		}
		_putchar('\n');
		a++;
		aynur = aynur - 26;
	}
}
