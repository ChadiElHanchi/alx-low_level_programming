#include "main.h"

/**
 * print_diagonal - check the code
 *
 * @n: Number of times the character '_' should be printed
 */
void print_diagonal(int n)
{
int b, space;
if (n <= 0)
_putchar('\n');
else
{
for (b = 1; b <= n; b++)
{
for (space = 1; space <= b; space++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
