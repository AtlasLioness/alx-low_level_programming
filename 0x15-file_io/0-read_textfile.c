#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: pointer to text file to read
 * @letters: number of letter to read and print
 *
 * Return: actual number of letter read and printed
 * or 0 if cannot open/read, write failure or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, l;
	char *buffer;
	size_t n;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0);

	if (fd < 0)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	l = read(fd, buffer, letters);
	if (l < 0)
		return (0);
	buffer[l] = '\0';

	n = write(1, buffer, l);

	close(fd);

	if (n != letters && n != 0)
		return (0);
	else
		return (l);
}
