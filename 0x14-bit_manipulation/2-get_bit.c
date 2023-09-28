#include"main.h"

/**
 * get_bit - this is a function that returns
 * the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num_divisor, num_check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	num_divisor = 1 << index;
	num_check = n & num_divisor;
	if (num_check == num_divisor)
		return (1);
	return (0);
}

