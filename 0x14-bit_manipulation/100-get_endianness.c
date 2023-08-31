#include "main.h"

/**
* get_endianness - returns endianness
* Return: 0 if endian , 1 if small
*/
int get_endianness(void)
{
unsigned long int n = 1;

return (*(char *)&n);
}
