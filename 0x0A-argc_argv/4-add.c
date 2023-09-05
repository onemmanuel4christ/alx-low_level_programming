#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isnumber - checks if string is a number
 * @s: string
 * Return: On success 1.
 * If not a number, 0 is returned.
*/

int _isnumber(cahr *s)
{
	int num, check, d;

	num = 0, d = 0, check = 1;
	if (*s == '-')
		num++;

	for (; *(s + num) != 0; num++)
	{
		d = isdigit(*(s + num));
		if (d == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}

/**
 * main - Entry point
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int a, b, c;

	c = 0, b = 0;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			if (_isnumber(argv[a]))
				b += atoi(argv[a]);
			else
				c = 1;
		}
	}
	if (c == 0)
		printf("%i\n", b);
	else
		printf("%s\n", "Error");
	return (c);
}
