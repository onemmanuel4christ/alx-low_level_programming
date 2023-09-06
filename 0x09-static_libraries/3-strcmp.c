#include "main.h"
/**
 * _strcmp - function that will compare string values
 * @s1: input value tho be compared
 * @s2: input value for the operation
 * Return: s1[i] - s2[i]
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
