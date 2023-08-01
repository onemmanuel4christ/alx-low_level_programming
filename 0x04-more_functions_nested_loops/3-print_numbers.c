#include "main.h"

/**
 * print_numbers - prints int btw 0 to 9.
 * Return: return null.
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

