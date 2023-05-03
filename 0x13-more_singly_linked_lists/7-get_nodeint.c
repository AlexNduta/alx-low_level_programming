#include "lists.h"
/**
 *get_nodeint_at_index -gets an elemnt at nth node of our list
 *@head: pointer of the first node
 *@index: index of the node
 *
 *Return:pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	/* check if our list is empty */
	if (head == NULL)
		return (NULL);

	/*traverse the list until index is reached  or end */
	for (i = 0; i < index; i++)
	{
		head = head->next;

		/*check if the list is reached before index */
		if (head == NULL)
			return (NULL);
	}

	/*return pointer to nth node */
	return (head);
}
