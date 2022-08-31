#include "search_algos.h"
/**
* linear_search - searches for a value in an array of integers
* @array: an array
* @size: the size of the array
* @value: value to search for
* Return: the value or -1
*/
int linear_search(int *array, size_t size, int value)
{
size_t i;
if (!array)
return (-1);
i = 0;
while (i < size)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
i++;
}
return (-1);
}
