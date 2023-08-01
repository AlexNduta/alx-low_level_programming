#include "lists.h"
/**
 *insert_nodeint_at_index - inserts new node at given position
 *@head:pointer to the head of the linked list
 *@idx:index of the node to insert
 *@n: value of the new node
 *
 *Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, size_t idx, int n)
{
	size_t i;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx -1 && temp != NULL; i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

	new->n = n;
	if (idx != 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	new->next = temp->next;
	temp->next = new;
	return (new);
}

