#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: this program prints Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
int newNum;

srand(time(0));
newNum = rand() - RAND_MAX / 2;
if (newNum > 0)
{
	printf("%d is positive\n", newNum);
}
else if (newNum == 0)
{
	printf("%d is zero\n", newNum);
}
else if (newNum < 0)
{
	printf("%d is negative\n", newNum);
}
return (0);
}

