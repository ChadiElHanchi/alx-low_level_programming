"include "main.h"
/**
 * print_rev : prints in reverse
 *
 * @s : string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	while (*s !='\0')
	{
		_putchar(*s);
		--s;
	}
	_putchar('\n);
}
