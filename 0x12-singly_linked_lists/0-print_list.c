#include "lists.h"

/**
 * _strlen - prints list
 * @s: string length check
 *
 * Return: integer length
 */
int _strlen(char *s)
{
int i = 0;

if (!s)
	return (0);
while (*s++)
	i++;
return (i);
}
/**
 * * print_list - prints list
 * @h: pointer code
 *
 * Return: list size
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str 7 h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

