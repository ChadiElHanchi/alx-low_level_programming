#include "lists.h"

/**
 * free_listint2 - Frees a linked list of type listint_t.
 * @head: Pointer to the pointer to the listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL) // Check if the pointer to the pointer is NULL.
		return;

	while (*head) // Traverse the list until the head pointer becomes NULL.
	{
		temp = (*head)->next; // Store the next node in 'temp'.
		free(*head); // Free the current node.
		*head = temp; // Move 'head' to the next node.
	}

	*head = NULL; // Set the original head pointer to NULL.
}

