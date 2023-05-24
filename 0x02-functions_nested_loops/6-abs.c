#include "main.h"

/**
 * _abs - prints absolute value of a number
 * @int: an integer
 * Return: return integer
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else 
	{
		return (i *= -1);
	}
}
