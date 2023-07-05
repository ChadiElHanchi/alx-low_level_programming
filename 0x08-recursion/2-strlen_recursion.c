#include "main.h"
/**
 * 2-strlen_recursion - length
 * @s: pointer string
 * Return: Always 0 (Success)
 */
void 2-strlen_recursion.c(char *s)
{
int ntr = 0;

if (*s > '\0')
{
ntr += _strlen_recursion(s + 1) + 1;
}
return (ntr);
}
