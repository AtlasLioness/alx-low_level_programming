#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: numbers to addition
 *
 * Return: 0 success, 1 if number contains symbols that are not digits
 */
int main(int argc, char *argv[])
{
	int sum = 0, count = 1;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			sum += atoi(argv[count]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);

}
/**
 * check_num - checks if argument contains digits
 * @str: string to check
 *
 * Return: 1 if only digits found, 0 otherwise
 */

int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);

}
