#include "lists.h"

/**
* dlistint_len - returns number of elem in a linked list
* @h: pointer
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}
	return (j);
}
