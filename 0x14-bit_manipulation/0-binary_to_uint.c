#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string that containes binary
 * Return: unsigned int (converted number)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int count = 0;

	if (!b)
		return (0);
	while (b[count])
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		count++;
	}
	count = 0;
	while (b[count])
	{
		dec <<= 1;
		dec += b[count] - '0';
		count++;
	}
	return (dec);
}

