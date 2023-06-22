#include "main.h"

/**
 * print_numbers- check the code
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
int i = 0;
while (i >= 0 && i <= 9)
{
_putchar(i + 48);
i++;
}
_putchar('\n');
}
