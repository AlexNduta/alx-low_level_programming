#include "lists.h"
/**
 *add_node_end - Adds a new node at the end our list
 *@head:the head of our list
 *@str: item to add
 *Return:pointer to out new node
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *brand_new, *temp;

	if (str == NULL)
		return (NULL);

	brand_new = malloc(sizeof(list_t));
	if (brand_new == NULL)
		return (NULL);

	brand_new->str = strdup(str);
	if (brand_new->str == NULL)
	{
		free(brand_new);
		return (NULL);
	}

	brand_new->len = strlen(brand_new->str);
	brand_new->next = NULL;

	if (*head == NULL)
	{
		*head = brand_new;
		return (brand_new);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = brand_new;
	return (brand_new);
}
