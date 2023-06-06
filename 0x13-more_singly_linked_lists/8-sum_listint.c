#include "lists.h"

/**
 * sum_listint - returns sum of all elements in a linked list
 * @head: the first node in the linked list
 * Return: returns the sum
 */
int sum_listint(listint_t *head)
{
	int totalsum = 0;
	listint_t *a = head;

	while (a)
	{
		totalsum += a->n;
		a = a->next;
	}
	return (totalsum);
}
