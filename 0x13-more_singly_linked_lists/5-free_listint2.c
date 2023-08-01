#include "lists.h"
/**
 *free_listint2 - frees the liat and set head to NULL
 *@head: pointer to the first element of our list
 *
 *Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *free_var;

	while (*head != NULL)
	{
		free_var = *head;
		*head = (*head)->next;
		free(free_var);
	}
	*head = NULL;
}
