#include "lists.h"
/**
 * add_nodeint - add new node at the beginning of a listint_t list.
 * @head: pointer to pointer to the first node in the listint_t list.
 * @n: integer member of the listint_t list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *s = malloc(sizeof(listint_t));
	if (s == NULL)
	{
		return (NULL);
	}
	s->n = n;
	s->next = *head;
	*head = s;
	return (s);
}
