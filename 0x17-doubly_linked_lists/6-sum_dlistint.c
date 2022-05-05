#include "lists.h"
/**
 * sum_dlistint - returns the sum of the elements of a list
 * @head: head of the list
 * Return: the sum of all the data, if the list is empty
 * returns 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
