#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to first node
 * @index: the index of the node
 * Return: returns the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;


	while (head != NULL  && i != index)
	{
	head = head->next;
	i++;
	}
	return (head);
}
