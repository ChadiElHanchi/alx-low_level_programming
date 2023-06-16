#include <stdio.h>

/**
* main - alphabet
*
* Return: Always 0.
*/
int main(void)
{
int i;
putchar('0');
for (int i = 1; i < 10; i++)
{
putchar(',');
putchar(' ');
putchar('0' + i);
}
putchar('\n');
return (0);
}
