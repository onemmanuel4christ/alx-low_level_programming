#include "main.h"
/**
 *  _strcat - this function is able to concat two strings
 *  @dest: destination value
 *  @src: source value
 *
 *  Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;

	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}

