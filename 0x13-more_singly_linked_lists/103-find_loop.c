#include "lists.h"
/**
 *find_listint - looks for loops in a list
 *@head: pointer to the begining of our list
 *
 *Return: address of start node or NULL if loop doesn't exist
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tuk_tuk = head, *car = head;

	/*move the pointers until they meet each other */

	while (tuk_tuk && car && car->next)
	{
		tuk_tuk = tuk_tuk->next; /*Tuk_tuk moves one step */
		car = car->next->next; /*car moves two steps */

		/*if the pointers meet, a loop exits */
		if (tuk_tuk == car)
		{
		/* reset the tuk_tuk to the begining */
			tuk_tuk = head;

	/*move both pointers at the same speed till they meet */
			while (tuk_tuk != car)
			{
				tuk_tuk = tuk_tuk->next;
				car = car->next;
			}

			return (car);
		}
	}
	/*if the pointers don't meet, there's no loop */
	return (NULL);
}

