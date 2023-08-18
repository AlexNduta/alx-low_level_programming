#include "lists.h"

/**
*GetNewNode - creates a new memmory address and assign it data
*@x: data to be passed on t our function
*Return: address to our new created memory
*/
dlistint_t *GetNewNode(int x)
{
dlistint_t *newNode = malloc(sizeof(dlistint_t));

newNode->n = x;
newNode->prev = NULL;
newNode->next = NULL;
return (newNode);
}
