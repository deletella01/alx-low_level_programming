#include "main.h"

/**
* _isalpha - this function checks if a letter is lower case or uppercase.
* @c: the aphabetic character
* Return: 1
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
