#include "main.h"

/**
* _strlen - this function returns the length of a string
*
* @s: String value

* Return: length of string
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
