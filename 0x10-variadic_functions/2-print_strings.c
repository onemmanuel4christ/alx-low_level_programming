#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings.
 * @n: resepresents the number of arguments
 * @separator: resepresents the seperator between the numbers
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int count;
	char *str;

	va_start(strings, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("nil");
		else
		{
			printf("%s", str);
			if (count < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
