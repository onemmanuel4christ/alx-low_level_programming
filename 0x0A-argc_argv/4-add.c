#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_number - verify if the string there are digit
 * @str: array string to be checked
 *
 * Return: 0
 */
int check_num(char *str)
{
unsigned int count;

count = 0;

while (count < strlen(str))
{
	if (!isdigit(str[count]))
	{
		return (0);
	}
	count++;
}
return (1);
}

/**
 * main - this function will print the name of the program
 * @argc: this function will Count arguments
 * @argv: this reperesent the Arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int count;

	int str_to_int;

	int sum = 0;

	count = 1;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}

	printf("%d\n", sum);

	return (0);
	}
