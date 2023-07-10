#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to the POSIX stdout
 * @filename: file to read
 * @letters: number of letters read
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t re, wr, numlet;
	char *buff;

	if (!filename || !letters)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	re = open(filename, O_RDONLY);

	if (re == -1)
	{
		free(buff);
		return (0);
	}

	numlet = read(re, buff, letters);

	wr = write(STDOUT_FILENO, buff, numlet);

	close(re);

	free(buff);

	return (wr);
}
