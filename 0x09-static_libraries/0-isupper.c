#include "main.h"
/**
 * isupper - this will return upper case caharcter
 * @c: this defines the characters to be checked
 *
 * Return: true or false
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
