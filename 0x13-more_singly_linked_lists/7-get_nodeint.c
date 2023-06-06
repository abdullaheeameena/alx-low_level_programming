#include "lists.h"

/**
 * get_nodeint_at_index - method returns node
 * at the specified index in a linked list
 * @head: the first node ina linked list
 * @index: the index of the node that isbeen returned
 * Return: the node on success or NULL on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;
	listint_t *t = head;

	while (t && l > index)
	{
		l++;
		t = t->next;
	}
	return (t ? t : NULL);
}
