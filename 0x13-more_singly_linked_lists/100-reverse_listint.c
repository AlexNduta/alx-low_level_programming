#include "lists.h"
/**
 *reverse_listint - reverse our list
 *@head: pointer to the first node
 *
 *Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	/*initialise the variables */
	listint_t *before_node = NULL;
	listint_t *after_node = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	while (*head != NULL)
	{
		after_node = (*head)->next;
		(*head)->next = before_node;
		before_node = *head;
		*head = after_node;
	}
	*head = before_node;
	return (*head);
}
