#include "main.h"

/**
* get_bit - prints number 
* @n: number to print
* @index: bit to get
* Return: nothing
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
return (n >> index & 1);
}

