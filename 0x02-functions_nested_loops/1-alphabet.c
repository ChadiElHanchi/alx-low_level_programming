#include "main.h"

/**
 * print_alphabet - print in lowercase
 */

void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
