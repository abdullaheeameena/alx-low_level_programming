#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees the list
 * @head: list being freed
 */
void free_list(list_t *head)
{
	list_t *d;

	while (head)
	{
		d = head->next;
		free(head->str);
		free(head);
		head = d;
	}
}
