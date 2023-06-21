#include "main.h"
/**
 * print_times_table - prints the n-times table 
 * startin with zero.
 *
 * @n : integer to use.
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int a, b, mult;
	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				mult = a * b;
				if (mult <= 9)
				{
					_putchar(' ');
				}
				if (mult <= 99)
				{
					_putchar(' ');
				}

				if (mult <= 99 && mult >= 10)
				{
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else if (mult >= 100)
				{
					_putchar((mult / 100) + '0');
					_putchar(((mult / 10) % 10) + '0');
				}
			_putchar('\n');
		}
	}
}
