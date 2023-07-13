#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - malloc
 * @b: bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
int *m = malloc(b);

if (m == 0)
exit(98);
return (m);
}
