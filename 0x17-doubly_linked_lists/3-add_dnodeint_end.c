#include "list.h"

/**
 *dlistint_t - adds an element to the end of our list
 *@head: pointer to the head of our list
 *@n: value to add at our list
 *Return: pointer to our new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    if (head == NULL)
        return (NULL);
    dlistint_t current;
    dlistint_t newItem = GetNewNode(n);
    /*if memory allocation is NULL*/
    if newItem == NULL
        return (NULL);
/*when the list is empty */
    if (*head == NULL)
    {
        newItem->prev = NULL;
        *head = new'
        return (newitem);
    }
    /* as long as we have not reached the last item, keep moving forward */
   current = *head;
    while(current->next != NULL)
    {
        current = current-next;
    }
/*when you get to the last item, make the current node point to the new item*/
    current->next = newItem;
    newItem->prev =current;

return (newItem);
}
