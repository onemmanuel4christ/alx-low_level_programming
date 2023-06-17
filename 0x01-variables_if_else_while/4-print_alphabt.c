#include <stdio.h>
/**
 * main - print alphabets excpet e and q
 *
 * Description: This program prints "Alphabets except e and q
 * Return: 0
 */
int main(void)
{
char letter;

for (letter = 'a' ; letter <= 'z' ; letter++)
{
if (letter != 'e' && letter != 'q')
{
	putchar(letter);
}
}
putchar('\n');
return (0);
}

