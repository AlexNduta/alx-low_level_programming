#include "lists.h"
/**
 *free_listint - free the linkedlist
 *@head: pointer to the first node of the list
 *
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp_var = NULL;

	while (head != NULL)
	{
		temp_var =  head;
		head = head->next;
		free(temp_var);
	}
}
