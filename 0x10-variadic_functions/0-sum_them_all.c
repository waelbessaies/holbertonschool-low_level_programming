#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all parameters
 * @n: integer
 * @...: functions
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}
	va_end(args);
	return (sum);
}
