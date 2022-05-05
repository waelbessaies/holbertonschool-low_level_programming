#include "lists.h"

/**
 * print_dlistint - print all elem of a list
 *@h : pointer
 * Return: nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}

	return (j);
}   