#include <unistd.h>


/**
 * _putchar - a program that can write character out
 * @c: The character to printed
 *
 * Return: 0 or 1
 * On error: return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

