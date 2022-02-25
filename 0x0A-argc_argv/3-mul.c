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
	int i = 0, n = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		n = atoi(argv[2]);
		printf("%d\n", i * n);
	}
	else
	{
		printf("Error\n");
			return (1);
	}
	return (0);
}
