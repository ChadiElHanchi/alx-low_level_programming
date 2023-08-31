#include "main.h"

/**
* set_bit - prints number
* @n: number to print
* @index: bit to get
* Return: nothing
*/
int set_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
return (!!(*n |= 1L << index));
}

