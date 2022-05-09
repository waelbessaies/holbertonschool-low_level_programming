#include "main.h"
/**
 *_atoi - convert a string to an integer
 *@s: pointer.
 *
 *Return: always 0.
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int i = 0;
	int r = 1;
	int l = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			r *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			l = 1;
			i = (i * 10) + (s[a] - '0');
			a++;
		}
		if (l == 1)
		{
			break;
		}
		a++;
	}
	i *= r;
	return (i);
}