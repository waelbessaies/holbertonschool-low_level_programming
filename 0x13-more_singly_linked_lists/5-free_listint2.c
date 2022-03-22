#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and stes the head to NULL
 * @head: first element of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	 *head = NULL;

	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}
