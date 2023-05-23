#include "main.h"

/**
 * _isalpha - function that checks for
 * alphabetic character
 * @c: character to be checked for
 * Return: 1 if succes
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
