#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the file itwas compiled from
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
