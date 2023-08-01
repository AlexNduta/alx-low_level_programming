#include "lists.h"
/**
 *add_node - adds a node ayt the start
 *@head: head of our list
 *@str: input value
 *Return: toatal number of nodes in our list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *topup;

	topup = malloc(sizeof(list_t));
	if (topup == NULL)
		return (NULL);

	topup->str = strdup(str);

	topup->len = strlen(str);
	topup->next = *head;
	*head = topup;

	return (topup);
}
