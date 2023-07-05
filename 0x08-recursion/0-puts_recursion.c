#include "main.h"
/**
 * _puts_recursion - prints string and new line
 * @s: pointer string
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
}
}
