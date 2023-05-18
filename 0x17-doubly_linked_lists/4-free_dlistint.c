#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to head node of doubly linked list to free
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
