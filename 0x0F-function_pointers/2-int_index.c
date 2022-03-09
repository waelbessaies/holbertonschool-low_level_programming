#include <stddef.h>
#include "function_pointers.h"
/**
*int_index - executes a function given as a parameter
*@array: array
*@size:size of array
*@cmp: pointer to the function
*Return: void
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
