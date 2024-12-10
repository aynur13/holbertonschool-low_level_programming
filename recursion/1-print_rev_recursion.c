#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int _sqrt(int x, int y);
int is_prime_number(int n);
int _prime_number(int x, int y);
#endif#include "main.h"
#include <stdio.h>
/**
* _print_rev_recursion - check the code
* @s: string
* Return: Always 0.
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
