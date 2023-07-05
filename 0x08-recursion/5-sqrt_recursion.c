#include "main.h"

/**
 * _sqrt_recursion - find natural square
 * @n: int
 * @val: square root
 * Return: the resulting square root
 */
int _sqrt_recursion(int n, int val)
{
	return (square(n, 1));
}

/**
 * square - square root
 * @n: int
 * @val: square root
 *
 * Return: the resulting square root
 */
int square(int n, int val)
{
if (val * val == n)
return (val);
else if (val * val < n)
return (square(n, val +1));
else
return (-1);
}

