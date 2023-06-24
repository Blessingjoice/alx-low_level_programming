#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i = 0;
	int j, k;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				k = j % 10;
			}
			_putchar(k + 48);
		}
		_putchar('\n');
		i++;
	}
}
