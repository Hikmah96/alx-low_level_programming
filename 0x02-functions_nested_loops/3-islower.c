#include "main.h"

/**
 * _islower - function that checks for
 * lowercase character
 * @c: character to be checked
 * Return: return 1 if succes
 */
int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
		return (1);
	else
		return (0);
}
