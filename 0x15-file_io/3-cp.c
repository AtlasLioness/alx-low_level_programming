#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that copies the content of a file to another file
 * @ac: number or arguments
 * @av: argument
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file_from, file_to, len1 = 1024, len2;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);

	if (file_from == -1)
		errox(98, av[1]);

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (file_to == -1)
		errox(99, av[2]);

	while (len1 == 1024)
	{
		len1 = read(file_from, buff, 1024);
		if (len1 == -1)
			errox(98, av[1]);

		len2 = write(file_to, buff, len1);
		if (len2 < len1)
			errox(99, av[2]);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", file_to);
		exit(100);
	}
	return (0);
}
/**
 * errox - handles error messages and exits
 * @num: exit code
 * @str: file name or fd value
 */

void errox(int num, char *str)
{
	if (num == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(98);
	}

	if (num == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(99);
	}
}
