#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the first element of the list
 * @n: integer (element)
 * Return: adress of the new element if success, NULL otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *h;

	new_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	h = *head;
	while (h->next)
		h = h->next;
	h->next = new_node;
	new_node->next = NULL;
	return (new_node);
}
