#include "main.h"

/**
 * binary_to_uint - this is a function converts a
 * binary number to an unsigned int.
 * @b: tis is a pointer to a string containing a binary number
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int my_counter;
	unsigned int number;

	number = 0;
	if (!b)
		return (0);
	for (my_counter = 0; b[my_counter] != '\0'; my_counter++)
	{
		if (b[my_counter] != '0' && b[my_counter] != '1')
			return (0);
	}
	for (my_counter = 0; b[my_counter] != '\0'; my_counter++)
	{
		number <<= 1;
		if (b[my_counter] == '1')
			number += 1;
	}
	return (number);
}

