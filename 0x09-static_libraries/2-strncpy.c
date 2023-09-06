#include "main.h"
/**
 * _strncpy - This function will copy a string
 * @dest: destination of the value
 * @src: the source of the value
 * @n: the current input 
 * Return: desttination
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
