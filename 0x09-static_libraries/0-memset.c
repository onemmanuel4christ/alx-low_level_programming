#include "main.h"
/**
 * _memset - sets memory from particlar value
 * @s: begininig of the address of the memory
 * @b: the desired value
 * @n: total number of size in byte
 *
 * Return: returns array with byte size
*/

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
