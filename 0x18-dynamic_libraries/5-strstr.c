#include "main.h"
#include <stdio.h>

/**
* _strstr - check the code
*@haystack: This is the main string to be examined
*@needle: This is the sub-string to be searched in the above string.
* Return: Always 0.
*/
char *_strstr(char *haystack, char *needle)
{
	int a, j;

	for (a = 0; haystack[a]; a++)
	{
		j = 0;
		while (needle[j] && haystack[a + j] == needle[j])
			j++;
		if (!needle[j])
			return (&haystack[a]);
	}
	return (0);
}