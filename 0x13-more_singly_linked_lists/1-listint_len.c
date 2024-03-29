#include "lists.h"
#include <stdio.h>

/**
* listint_t - Returns all the elements of a listint_t list.
* @h: A pointer to the head of the list_t list.
* Return: Number of nodes in the list_t list.
*/

size_t listint_len(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}

return (nodes);

}
