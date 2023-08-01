#include "lists"

/**
 * *free_listint - frees list
 * @head: pointer
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *node;

while (head)
{
node = head;
head = head->next;
free(node);
}
}
