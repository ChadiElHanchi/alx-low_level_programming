#include "lists"

/**
 * free_listint2 - list
 * @head: pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head=
		{
		listint_t *node;
		listint_t *temp;

		if (!head)
	return;
	node = *head;
	while (node)
	{
	temp = node;
	node = node->next;
	free(temp);
	}
	*head = NULL;
	}
