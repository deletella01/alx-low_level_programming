#include <stdio.h>

/**
* main - Entry point
*
* This program prints all the numbers of base 16 in lowercase
* using putchar function.
*
* Return: 0
*/

int main(void)
{
	char y;
	char d = '0';

	while (d <= '9')
	{
	putchar(d);
	d++;
	}

	for (y = 'a'; y <= 'f'; y++)
	{
	putchar(y);
	}

	putchar('\n');
	return (0);
}
