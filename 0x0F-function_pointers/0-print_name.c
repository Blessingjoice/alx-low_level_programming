#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: name of the person.
 * @f: pointer with a function to be used as parameter.
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
