#include <stdio.h>

/**
* main - alphabet
*
* Return: Always 0.
*/
int main(void)
{
char n;
for (n = 'z'; n <= 'a'; n--)
{
putchar('0' - n);
}
putchar('\n');
return (0);
}
