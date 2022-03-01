#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: integer
 * @c: character
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(size * sizeof(char));
	if (p == 0 || size == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
