#include "main.h"

/**
 * flip_bits - tis is a function that
 * counts the number of bits to change
 * to get from one number to another
 * @n: first number of the function
 * @m: second number in the function
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num_counter, bit_count = 0;
	unsigned long int current_index;
	unsigned long int exclusive_index = n ^ m;

	for (num_counter = 63; num_counter >= 0; num_counter--)
	{
		current_index = exclusive_index >> num_counter;
		if (current_index & 1)
			bit_count++;
	}

	return (bit_count);
}
