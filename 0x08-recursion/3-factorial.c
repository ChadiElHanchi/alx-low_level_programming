#include "main.h"
/**
 * factorial - fact
 * @n: pointer string
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
if( n < 0 )
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
