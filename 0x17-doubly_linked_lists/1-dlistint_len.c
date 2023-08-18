#include "lists.h"

/**
*dlistint_len - returns the number of elements in a list
*@h: pointer to the head node
*Return: number of elements in a node
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *temp = h;
size_t counter = 0;

while (temp != NULL)
{
temp = temp->next;
counter++;
}
return (counter);
}
