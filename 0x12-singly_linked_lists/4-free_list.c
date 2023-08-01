#include "lists.h"
/**
 *free_list - Relaeses the lists alocated memory
 *@head: points to the head of our list
 *
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
		{
			free(head->str);
		}
		free(head);
	}
}
