#include "main.h"

/**
 * print_square - Prints a square in the terminal.
 *
 * @size: Size of the square
 *
 * return: 0 sucess.
 */
void print_square(int size)
{
int a, b;
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
