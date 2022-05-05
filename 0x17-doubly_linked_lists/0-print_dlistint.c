#include "lists.h"
/**
 * print_dlistint - prints the elements of a list
 * @h: head 
 * Return: i
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (i);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}