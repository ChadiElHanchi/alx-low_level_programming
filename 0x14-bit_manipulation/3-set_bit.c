#include "main.h"

/**
* set_bit - prints number
* @n: number to print
* @index: bit to get
* Return: nothing
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

