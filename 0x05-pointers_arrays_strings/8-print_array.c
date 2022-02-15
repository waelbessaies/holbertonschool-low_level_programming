#include "main.h"
/**
 *print_array - str pointer
 *@a:pointer
 *@n:number of array
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
	if (i == 0)
	printf("%d", a[i]);
	else
	{
	printf(", %d", a[i]);
	}
	}
	printf("\n");
}
