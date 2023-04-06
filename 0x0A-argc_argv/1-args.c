#include "main.h"
#include <stdio.h>
/**
 * main - prints number of arguments passed into it
 * @argc : number of arguments
 * @argv: arguments passed
 *
 * Return: Always 0 (success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
