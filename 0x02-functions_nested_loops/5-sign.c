#include "main.h"
/**
 * print_sign - shows if the input number 
 *is greater, equal to or less than zero.
 * 
 * @n : number is in ASCII code.
 * Return: 1 is greater than zero. 0 is equal to zero
 * -1 is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 1)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	putchar('\n');
}
