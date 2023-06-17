#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: This program prints Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
int myNum;

srand(time(0));
myNum = rand() - RAND_MAX / 2;
if (myNum > 0)
{
	printf("%d is positive\n", myNum);
}
else if (myNum == 0)
{
	printf("%d is zero\n", myNum);
}
else if (myNum < 0)
{
	printf("%d is negative\n", myNum);
}
return (0);
}

