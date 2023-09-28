#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int my_counter;

	number = 1;
	for (my_counter = 1; my_counter <= power; my_counter++)
		number *= base;
	return (number);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num_divisor, num_check;
	char flag;

	flag = 0;
	num_divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (num_divisor != 0)
	{
		num_check = n & num_divisor;
		if (num_check == num_divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || num_divisor == 1)
		{
			_putchar('0');
		}
		num_divisor >>= 1;
	}
}

