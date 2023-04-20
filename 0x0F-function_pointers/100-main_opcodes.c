#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: number of arguments passed
 * @argv: number of bytes to print
 *
 * Return: 0 (success), 1 or 2 if failure
 */
int main(int argc, char *argv[])
{
	int i, len;
	unsigned char *fp;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	len = atoi(argv[1]);
	if (len < 0)
	{
		printf("Error\n");
		exit(2);
	}
	fp = (unsigned char *)main;
	for (i = 0; len > 0 && i < (len - 1); i++)
		printf("%02hhx ", fp[i]);
	printf("%hhx\n", fp[i]);
	return (0);

}
