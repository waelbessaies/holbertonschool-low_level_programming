#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum
 * @max: maximim
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int x;
	int *p = NULL;
	int i;

	if (min > max)
		return (NULL);

	p = (int*) malloc(sizeof(int) * (max - min) + 1);
	if (p == NULL)
		return (NULL);
	x = max - min + 1;
	for (i = 0; i < x; i++)
	{
		*(p + i) = min;
		min++;
	}
	return (p);
}

