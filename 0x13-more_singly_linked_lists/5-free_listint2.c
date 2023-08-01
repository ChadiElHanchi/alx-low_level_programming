#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list and sets the head to NULL.
 * @head: Pointer to the head of the list (a pointer to pointer).
 */
void free_listint2(listint_t **head)
{
    listint_t *current, *temp;

    if (head == NULL) // Check if the pointer to the pointer is NULL.
        return;

    current = *head; // Assign the head node to the 'current' pointer.

    while (current != NULL)
    {
        temp = current; // Save the current node in 'temp'.
        current = current->next; // Move 'current' to the next node.
        free(temp); // Free the 'temp' node.
    }

    *head = NULL; // Set the original head pointer to NULL.
}
