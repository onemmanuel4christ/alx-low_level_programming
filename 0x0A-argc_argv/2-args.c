#include <stdio.h>
#include "main.h"

/**
 * main: this is a program that will print all arguments received
 * @argc: this represent total number of argument
 * @argv: this means there are argument array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
