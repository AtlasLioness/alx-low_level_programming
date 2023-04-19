#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that performs simple operations
 * @argc : number of arguments
 * @argv : numbers passed as arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *op;
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	result = (get_op_func(op));

	if (result == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", result(a, b));
	return (0);
}
