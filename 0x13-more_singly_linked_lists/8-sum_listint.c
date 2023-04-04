#include "lists.h"

/**
 * sum_listint - Sums all the elements of the linked list
 * @head: Pointer of the first node of the list
 * Return: Sum value of all the elements
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += (head->n);
		head = head->next;
	}
	return (sum);
}
