#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers
 * from n to 98
 *
 * @n : number to start from
 *
 * Return:0
 */
void print_to_98(int n)
{
	int counter;

	if (n < 98)
		for (counter = n; counter < 98; counter++)
		printf("%d, ", n);
	else
		for (counter = n; counter > 98; counter--)
		printf("%d, ", n);
	printf("98\n");
}
