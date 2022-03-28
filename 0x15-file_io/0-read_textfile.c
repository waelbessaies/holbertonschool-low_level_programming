#include "main.h"
/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: file to read and print
 * @letters: number if letters to read and print
 * Return: number of letters read and printed or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int openfile;
	char *filecontent;

	filecontent = malloc(sizeof(char) * letters);
	if (!filename)
		return (0);
	openfile = open(filename, O_RDONLY);
