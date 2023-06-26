#include "main.h"

/**
 * _strlen- length of string.
 * @s: string.
 *
 * Return: None.
 */
int _strlen(char *s)
{
	int ount;
	for (count = 0; *s != '\0'; s++)
		++count;
	return (count);
}

