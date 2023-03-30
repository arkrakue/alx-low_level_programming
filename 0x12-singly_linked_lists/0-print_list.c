#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints elements of a linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count_list = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count_list++;
	}

	return (count_list);
}
