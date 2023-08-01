#include "lists.h"
/**
 *add_nodeint_end - adds a node to the end of our list
 *@head: pointer to the first node
 *@n: value of our node
 *
 *Return:pointer to the last node
 */
listint_t *add_nodeint_end(listint_t **head,  const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL; /* set as null cz its the last */

	if (*head == NULL) /*if list is  empty */
	{
		*head = new_node;
	} else
	{
		listint_t *latest_node = *head;

		while (latest_node->next != NULL)
		{
			latest_node = latest_node->next;
		}
		latest_node->next = new_node;
	}
return (new_node);
}

