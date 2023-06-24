#include "main.h"
/**
 * _isdigit - shows 1 if the input is a
 * digit from 1 - 9.
 *
 * @c: character is in ASCII code
 *
 * Return: 1 for digit 1 - 9. 0 for the rest.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
