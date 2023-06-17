#include <stdio.h>
/**
 * main - print numbers of base16 in lower case
 *
 * Description: This program print numbers of base16 in lower case
 * Return: 0
 */
int main(void)
{
char base16;

for (base16 = '0'; base16 <= '9'; base16++)
{
	putchar(base16);
}
for (base16 = 'a'; base16 <= 'f'; base16++)
{
	putchar(base16);
}
putchar('\n');
return (0);
}
