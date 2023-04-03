#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

/**
 * struct node - nodes for the linked list
 * @val: integer value to store
 * @next: pointer of the next node in linex
 */

typedef struct node
{
	int n;
	struct node *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
