#include "main.h"
#include <stdio.h>
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: binary form
 * @index: the index that has the bit needed
 *
 * Return:...
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
