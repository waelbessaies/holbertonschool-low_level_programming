#include <stdio.h>
#include <stdlib.h>
/**
* main - argv and argc programme
*@argc: unused varible
*@argv: argument value
* Return: always 0.
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
		return (0);
