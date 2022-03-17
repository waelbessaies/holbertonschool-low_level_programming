#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: data to put into the new node
 * Return: adress of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	while (str[i])
		i++;
	new_node->str = strdup(str);
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
