#include "lists.h"
/**
*sum_listint - adds all data in our list
*@head: pointer to the first node
*
*Return: Sum of all data in our list
*/
int sum_listint(listint_t *head)
{
	int summation = 0;

	/*Traverse the list and add each node to the sum */
	while (head != NULL)
	{
		summation = summation + head->n;
		head = head->next;
	}

	return (summation);
}
