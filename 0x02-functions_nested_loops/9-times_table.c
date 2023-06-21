#include "main.h"
/**
 * times_table - prints the 9 times table,
 * starting with 0.
 *
 * Return:void
 */
void times_table(void)
{
	int a;
	int b;
	int mult;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			mult = a * b;
			if (mult <= 9)
			{
				_putchar(' ');
				_putchar('0' + mult);
			}
			else
			{
				_putchar('0' + mult / 10);
				_putchar('0' + mult % 10);
			}
		}
		_putchar('\n');
	}
}
