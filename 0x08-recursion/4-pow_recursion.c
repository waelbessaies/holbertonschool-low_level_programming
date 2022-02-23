#include "main.h"
/**
 * _pow_recursion - computes of x raised to the power of y
 * @x: base
 * @y: power raised
 * Return: -1 if power is negative, 1 if power is zero, power otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

