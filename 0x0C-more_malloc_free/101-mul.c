#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/*
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */

int check_digit(char *str);
unsigned int multi(char *num1, char *num2);
void printer(unsigned int mul);
unsigned int numlen(char *num);

int main(int argc, char *argv[])
{
	int i, len, k = 0;
	char **num;
	char *digits, *num1, *num2;
	unsigned int *memory;
	char er[] = "Error";

	num = argv;

	if (argc != 3 || atoi(num[1]) < 0 || atoi(num[2]) < 0)
	{
		while (er[k] != '\0')
		{
			_putchar(er[k]);
			k++;
		}
		_putchar('\n');
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	len = numlen(num1) + numlen(num2) + 1;
	memory = malloc(len * sizeof(char));
	if (memory == NULL)
		return (1);
	for (i = 0; i < len - 1; i++)
		memory[i] = 0;
	for (i = 1; i < argc; i++)
	{
		digits = argv[i];
		if (check_digit(digits) != 0)
		{
			k = 0;
			while (er[k] != '\0')
			{
				_putchar(er[k]);
				k++;
			}
			_putchar('\n');
			exit(98);
		}
	}
	multi(num[1], num[2]);
	_putchar('\n');
	free(memory);
	return (0);
}

unsigned int numlen(char *num)
{
	unsigned int i = 0;

	while (num[i] != '\0')
		i++;
	return (i);
}

int check_digit(char *str)
{
	unsigned int i, len = 0;

	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if (isdigit(str[i]) == 0)
			return (1);
	}
	return (0);
}
unsigned int multi(char *num1, char *num2)
{
	unsigned int mul;

	mul = atoi(num1) * atoi(num2);
	if (mul >= 10)
		printer(mul);
	else
		_putchar(mul + '0');
	return (0);
}

void printer(unsigned int mul)
{
	unsigned int num;

	num = mul;

	if (num / 10 == 0)
		return;
	if (num / 10 >= 10)
	{
		num = num / 10;
		if (num / 10 < 10 && num / 10 != 0)
			_putchar((num / 10) + '0');
		printer(num);
	}
	_putchar((mul % 10) + '0');
}
