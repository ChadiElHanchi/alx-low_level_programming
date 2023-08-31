#include "main.h"

/**
* flip_bits - fliped to tranform one number to another
* @n: number 1st
* @m: 2nd
* Return: nothing
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xorval = n ^ m;
unsigned int count = 0;

while (xorval)
{
if (xorval & 1ul)
count++;
xorval = xorval >> 1;
}
return (count);
}
