#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int i = 0;
int a = 2;
int b = 4;
while (i >= 0 && i <= 9 && i != a && i != b)
{
_putchar(i + 48);
i++;
}
_putchar('\n');
}
