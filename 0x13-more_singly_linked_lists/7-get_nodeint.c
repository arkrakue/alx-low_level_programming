#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node of a linked list
 * @head: Pointer of the first node of the list
 * @index: index of the node to return
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
