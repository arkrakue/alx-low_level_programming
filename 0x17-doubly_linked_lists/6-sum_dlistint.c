#include "lists.h"

/**
 * sum_dlistint - Sums the elements in the list
 * @head: Pointer to head node of the list
 * Return: The sum of all elements in the list, or 0 if list is NULL
 */
int sum_dlistint(dlistint_t *head)
{
        int sum = 0;

        while (head)
        {
                sum += head->n;
                head = head->next;
        }
        return (sum);
}
