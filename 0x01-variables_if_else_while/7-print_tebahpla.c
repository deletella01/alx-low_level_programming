#include <stdio.h>
#include <unistd.h>

/**
* main - Entry point
*
* This program prints the lowercase alphabet in reverse
* using the putchar function.
*
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 'z'; i = 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
