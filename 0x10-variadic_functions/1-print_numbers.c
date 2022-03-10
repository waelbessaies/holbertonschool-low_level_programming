#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator between numbers
 * @n: number of the rest parameters
 * @...: the rest of the parameters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
	if (separator != NULL && i != n - 1)
	printf("%i%s", va_arg(ap, int), separator);
	else
	printf("%i", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
