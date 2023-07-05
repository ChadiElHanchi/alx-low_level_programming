#include "main.h"
/**
 * _print_rev_recursion - prints string and new line
 * @s: pointer string
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
	_puts_recursion(s + 1);
	_putchar(*s);
	}
}

