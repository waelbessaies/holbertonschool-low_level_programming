#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, C;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	C = 'A';
	while (C <= 'Z')
	{
		putchar(C);
		C = C + 1;
	}
	putchar ('\n');
	return (0);
}
