#include "main.h"
/**
 *binary_to_uint-converts a binary number to an unsigned int
 *@b:pointer to a string of 0 and 1 chars
 *Return: the converted number,or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int count = 0;

	if (b==0)
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
