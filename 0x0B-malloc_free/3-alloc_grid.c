#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - check the code
 * @width: pointer
 * @height: pointer
 * Return: always 0.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	j = malloc(sizeof(int *) * height);
	if (j == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		j[i] = malloc(sizeof(int) * width);
		if (j[i] == NULL)
		{
			while (i >= 0)
			{
				free(j[i]);
				i--;
			}
			free(j);
			return (NULL);
		}
	}


	return (j);
}
