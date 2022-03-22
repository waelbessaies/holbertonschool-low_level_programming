#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list_t list.
 * @h: linked list.
 * Return: number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
