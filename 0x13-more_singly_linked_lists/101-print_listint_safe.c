#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - countsthe number of unique nodes in alooped list
 * @head: first element of the linked list
 * Return: 0 if its not looped or the number of nodes n the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *a;
	const listint_t *b;
	size_t nd = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	a = head->next;
	b = (head->next)->next;

	while (b)
	{
		if (a == b)
		{
			a = head;

			while (a != b)
			{
				a = a->next;
				nd++;

				b = b->next;
			}
			a = a->next;

			while (a != b)
			{
				a = a->next;
				nd++;
			}
			return (nd);
		}
		a = a->next;
		b = (b->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a linkde list safely
 * @head: first element of a linked list
 * Return: the of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t index = 0;

	size_t nd;

	nd = looped_listint_len(head);

	if (nd == 0)
	{
		for (; head != NULL; nd++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nd; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nd);
}
