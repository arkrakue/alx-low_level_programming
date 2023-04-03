#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of nodes of a linked list
 * @h: start pointer of the linked list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes_num = 0;

	while (h != NULL)
	{
		nodes_num++;
		h = h->next;
	}
	return (nodes_num);
}
