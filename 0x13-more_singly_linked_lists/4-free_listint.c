#include "lists.h"

/**
 * free_listint - frees the linked list
 * @head: list to freed
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
