#include "lists.h"
/**
 * _reallocator - reallocates memory to the pointers
 *
 * @list: the old list
 * @size: new refined list
 * @new: new node to add to our  list
 *
 * Return: pointer to our new list
 */
const listint_t **_reallocator(const listint_t **my_list,
		size_t size, const listint_t *new)
{
	const listint_t **new_list;
	size_t r;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(my_list);
		exit(98);
	}
	for (r = 0; r < size - 1; r++)
		new_list[r] = my_list[r];
	new_list[r] = new;
	free(my_list);
	return (new_list);
}

/**
 * print_listint_safe - prints a list.
 * @head: pointer to the first node of our list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **my_list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == my_list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(my_list);
				return (num);
			}
		}
		num++;
		my_list = _reallocator(my_list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(my_list);
	return (num);
}
