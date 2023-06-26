#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 *
 * @str: The input string.
 *
 * Return: None.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int start_index;

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Determine the starting index for the second half of the string */
	start_index = (length + 1) / 2;

	/* Print the second half of the string */
	for (i = start_index; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}

