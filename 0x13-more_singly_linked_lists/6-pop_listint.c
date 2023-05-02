#include "lists.h"
/**
 *pop_listint - deletes the first node in our list
 *@head: pointer to the first
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_var;
	int x;
/*the pointer and node is empty */
	if (head == NULL && *head == NULL)
		return (0);

	/*Assign trmp_var value of head */
	temp_var = *head;
	/*Update *head to point the next node */

	*head = (*head)->next;
	x = temp_var->n;

	free(temp_var);
	return (x);
}
