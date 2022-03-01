#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strdup -  returns a pointer to the duplicated string
 * @str: string
 * Return: Always p
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	p = (char *) malloc(sizeof(char) * strlen(str) + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
	p[i] = str[i];

	return (p);
}
