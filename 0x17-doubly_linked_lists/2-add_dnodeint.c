#include "lists.h"

/**
*add_dnodeint - adds a node at the begining
*@head: the begining of our list
*@n: The value of our node
*Return: pointer to our new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
/*assign memory of our new node*/
dlistint_t *newNode = malloc(sizeof(dlistint_t));
/*if memory allocation failed */
if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->prev = NULL;
newNode->next = *head;

if (*head != NULL)
{
(*head)->prev = newNode;
}
*head = newNode;


return (newNode);
}
