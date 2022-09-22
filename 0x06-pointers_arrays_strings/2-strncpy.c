#include "main.h"

/**
* _strncpy - this function copies a string
*
* @dest: string cpopied to.
* @src: string to be copied.
* @n: number of bytes to be copied.
*
* Return: copied string
*/
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
