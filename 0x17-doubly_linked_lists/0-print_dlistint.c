#include "lists.h"

/**
*print_dlistint - prints all elements in out linked list
*@h: passed list
*Return: number of nodes to print
*/

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp = h;
size_t count = 0;

while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
count++;
}
return (count);
}

