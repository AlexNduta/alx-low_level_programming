#include "lists.h"
/**
*realloc_array - Realoactes memory for an aarray of pointers
*@list:  old lits to append
*@size: size of our newlist
*@new_node: node to add to the list
*
*Return: pointer  to our new list
*/
listint_t **realloc_array(listint_t **list, size_t size, listint_t *new_node)
{
	listint_t **new_list;
	size_t i;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(list);
		exit(89);
	}

	for (i = 0; i < size - 1; i++)
	{
		new_list[i] = list[i];
	}

	new_list[i] = new_node;
	free(list);

	return (new_list);
}
/**
 *free_listint_safe - Frees our list
 *@head: pointer to  the start of our list
 *
 *Return: Number of nodes in our list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return (num);

	while (*head != NULL)
	{
		for (i = 0;  i < num; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}

		num++;
		list = realloc_array(list, num, *head);
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}

	free(list);
	return (num);
}
