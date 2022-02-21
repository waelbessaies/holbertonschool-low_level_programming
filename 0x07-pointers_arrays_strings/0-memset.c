#include "main.h"
#include <stdio.h>

/**
* _memset - prints buffer in hexa
* @s: the address of memory to print
* @b: the size of the memory to print
*@n: unsigned int
* Return: Nothing.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
