#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: no of arguments
 * @argv: array arguments
 *
 * Return: Always 0;
 */

int main(int argc, char *argv[])
{
	int my_bytes, i;
	
	char *my_array;

	if (argc != 2)
		{
			printf("Error\n");
			exit(1);
		}
	my_bytes = atoi(argv[1]);
	
	if (my_bytes < 0)
		{
			printf("Error\n");
			exit(2);
		}
	arr = (char *)main;

	for (i = 0; i < my_bytes; i++)
		{
			if (i ==  my_bytes - 1)
			{
				printf("%02hhx\n", my_array[i]);
				break;
			}
			printf("%02hhx ", my_array[i]);
		}
	return (0);
	}

