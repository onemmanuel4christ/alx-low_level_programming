#include <stdio.h>
#include "main.h"

/**
 * main - program that multiply two numbers
 * @argc: Counts the num of argument
 * @argv: Pointer of array of pointers containing argument
 * Return: Always 0 (Success)
*/

int main(int argc, **argv)
{
	int a, b;

	b = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
	}
	else
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", a);
	}
	return (ex);

}
