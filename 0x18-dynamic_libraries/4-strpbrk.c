#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code
 *@s: string to be scanned.
 *@accept: string containing chratchters to match.
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}
	return ('\0');
}