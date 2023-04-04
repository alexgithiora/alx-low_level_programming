#include "lists.h"
#include <stdio.h>

/**
* listint_t - Adds a new node at the beginning of a listint_t list.
* @h: A pointer to the head of the list_t list.
* @n: Integer for the new node to contain.
* Return: The address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t = *newnode;

newnode = malloc(sizeof(listint_t));
if (newnode = NULL)
return (NULL);

newnode->n = n;
newnode->next = *head;

*head = newnode;

return (newnode);

}
