#include "main.h"

/**
 * print_square - Prints a square in the terminal.
 * @size: Size of the square.
 */
void print_square(int size)
{
int a,b;
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size; b++)
_putchar('#');
_putchar('\n');
}
}
