#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node at the index
 * @head: Pointer to head node of list
 * @index: The index of node to be found
 * Return: A pointer to node if found, or NULL in otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i++ == index)
			break;
		head = head->next;
	}
	return (head);
}
