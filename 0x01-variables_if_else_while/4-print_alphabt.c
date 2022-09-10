#include <stdio.h>

/**
* main - Entry point
*
* This program prints the alphabet in lowercase exempting 'q' and 'e'.
*
*
* Return: 0
*/

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}

	putchar('\n');
	return (0);
}
