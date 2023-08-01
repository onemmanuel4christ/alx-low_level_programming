#include "main.h"

/**
 * print_diagonal - prints diagonal lin for e n times.
 * @n: number of times diagonal line is printed.
 * Return: return 0.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

