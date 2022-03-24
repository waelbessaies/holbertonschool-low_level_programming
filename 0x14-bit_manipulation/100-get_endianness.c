#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int x = 1;

	char *y = (char*)&x;
	printf("%c\n",*y+48);
	return (0);
}
