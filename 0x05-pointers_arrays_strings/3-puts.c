#include "main.h"

/**
* _puts - this function prints a string followed by a new line
*
* @str: string pointer to be printed
*
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
