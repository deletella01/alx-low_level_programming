#include <stdio.h>
/**
* main - Entry point
*
* This program prints all single digits of base 10 starting from 0
* using only putchar to print.
*
* Return: 0
*/
int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
