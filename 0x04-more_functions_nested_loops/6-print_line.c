#include "main.h"
/**
 * print_line - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
