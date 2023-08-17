#include "lists.h"

/**
*print_dlistint - prints all elements in out linked list
*dlidtint_t: passed list
*Return: a list to print
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

