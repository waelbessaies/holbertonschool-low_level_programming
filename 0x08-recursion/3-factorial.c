#include "main.h"
/**
 * factorial - computs the factorial of a given number
 * @n: integer of which the factorial will be calculated
 * Return: 0 if n is 0, factorial if postive and
 * different of 0, -1 if error (n is negative)
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
