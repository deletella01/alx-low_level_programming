#include <stdio.h>
/**
* main - Entry point
*
* This program prints all single digit numbers of base 10 starting from 0.
*
* Return: 0
*/

int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		printf("%d", y);
	}
	putchar('\n');
	return (0);
}
