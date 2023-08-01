#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list and sets the head to NULL.
 * @head: Pointer to the head of the list (a pointer to pointer).
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	listint_t *current, *temp;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}

