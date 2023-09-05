#include <stdio.h>
#include "main.h"

/**
 * main - this program print what they call me
 * @argc: no of arguments
 * @argv: array of the aruguments
 * Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
