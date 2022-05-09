#include "main.h"

/**
* _strchr - check the code
*@s: pointer
*@c: char
* Return: Always 0.
*/
char *_strchr(char *s, char c)
{
	int a = 0, i;

	while (s[a])
	{
		a++;
	}
	for (i = 0; i <= a; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	}
		return ('\0');
}