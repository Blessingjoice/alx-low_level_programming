#include "main.h"
/**
 * is_palindrome - checks if astring is a palindrome.
 * @s: string to reverse
 *
 * Return: 1 if it is and 0 if it is not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function that returns the length of a string
 * @s:pointer with the address of the string
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		return (_strlen_recursion(&s[i]) + 1);
	}
	else
	{
		return (0);
	}

}

/**
 * check_pal - checks the characters for a palindrome.
 * @s: string to check.
 * @i: iterator.
 * @len: lenght of the string.
 * Return: 1 if it is and 0 if it is not.
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
