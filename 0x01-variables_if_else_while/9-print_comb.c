#include <stdio.h>

/**
* main - alphabet
*
* Return: Always 0.
*/
int main(void)
{
int i;
int separator = 0;
putchar('0');
for (i = 1; i < 10; i++)
{
if (separator)
{
putchar(',');
putchar(' ');
}
putchar('0' + i);
separator = 1;
}
return (0);
}
