#include "main.h"
/**
 * get_endianness - check endianness
 *
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *)&x;

	if (*y)
		return (1);
	else
		return (0);
}


