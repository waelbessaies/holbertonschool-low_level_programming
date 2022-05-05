#include "lists.h"
/**
* add_dnodeint - function that add a new node in
* the beginning of a list
* @head: head of the list
* @n: integer
* Return: the adress
* NULL when falied
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
