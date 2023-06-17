#include <stdio.h>
/**
 * main - prints lower case in reverse
 * Description: This program prints lowercase in reverse
 * Return: 0
 */
int main(void)
{
char lowerCase;

for (lowerCase = 'z'; lowerCase >= 'a'; lowerCase--)
{
putchar(lowerCase);
}
putchar('\n');
return (0);
}

