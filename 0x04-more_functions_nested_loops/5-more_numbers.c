#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
_putchar((i / 10) + '0');  // Print the tens digit
}
_putchar((i % 10) + '0');  // Print the ones digit
}
_putchar('\n');
}
}
