#include "main.h"

/**
 * puts2 - prints number
 *
 * @str: string param
 *
 * Return: nothing
 */

void puts2(charc *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
