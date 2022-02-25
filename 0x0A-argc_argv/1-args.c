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
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
