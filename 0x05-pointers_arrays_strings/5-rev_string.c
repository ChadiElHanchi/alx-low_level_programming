#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: string
 *
 * Return: none
 */

void rev_string(char *s)
{
int counter = 0;

int x;

while (*s != '\0')
{
	counter++;
	s++;
}
s--;
for (x = counter; x > 0; x--)
{
	_putchar(*s);
	s--;
}
_putchar('\n');
}
