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
int length = 0;
int i;

if (s == NULL)
	return;
while (s[length] != '\0')
{
	length++;
}
for (i = length - 1; i >= 0; i--)
putchar (s[i]);
putchar ('\n');
}