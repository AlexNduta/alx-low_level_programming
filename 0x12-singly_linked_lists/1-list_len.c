#include "lists.h"
/**
 *list_len - return number of elements in a list
 *@h:  pointer to the head
 *
 *Return: the number of nodes in our string
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
