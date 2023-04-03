#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the all the elements in a linked list
 * @h: starting pointer of the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
