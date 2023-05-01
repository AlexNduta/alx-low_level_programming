#include "lists.h"
/**
 *listint_len- counts the number of nodes in the list
 *@h: this is the head node
 *Return: number of  nodes in our list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
