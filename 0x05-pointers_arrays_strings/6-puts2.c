#include <unistd.h>
#include "main.h"

/**
 *puts2 - str pointer
 *@str:string pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts2(char *str)
{
	int i, c;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}
		for (c = 0 ; c < i ; c += 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');

}
