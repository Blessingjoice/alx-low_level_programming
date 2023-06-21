#include "main.h"
/**
 * print_last_digit - prints the last digits of a number.
 *
 * @n : input number as an integer
 *
 * Return:0 or 1
 */
int print_last_digit(int n)
{
	int j;

	j = n % 10;
	if (j < 0)
	{
		_putchar(-j + 48);
		return (-j);
	}
	else
	{
		_putchar(j + 48);
		return (j);
	}
}
