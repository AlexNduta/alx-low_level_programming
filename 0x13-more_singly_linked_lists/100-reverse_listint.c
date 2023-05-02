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
	listint_t *current_node = *head;

	if (head == NULL && *head == NULL)
		return (NULL);
/*if the list has one node, then its already reversed */
	if ((*head)->next == NULL)
		return (*head);

	/* Reverse our list */
	while (current_node != NULL)
	{
	/* save the next_node */
		after_node = current_node->next;

		/*reverse the link */
		current_node->next = before_node;

		/* Update the before and afternodes */
		before_node = current_node;
		current_node = after_node;
	}
	/*update the head to point to the first node */
	*head = before_node;
	return (*head);
}
