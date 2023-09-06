#include "main.h"
/**
 * main - a orogram to print a string
 * Return: Always 0 (Success)
 * str: string
 * _puts: new value
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
