#include "main.h"

/**
 * swap_int - swaps values.
 * @a: A pointer to the integer.
 * @b: 2nd value
 * Return: None.
 */
void swap_int(int *a, int *b)
{
	*a=&b;
	*b=&a;
}

