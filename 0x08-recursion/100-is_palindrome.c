#include "main.h"
/**
 * is_palindrome - checks if astring is a palindrome.
 * @s: string to reverse
 *
 * Return: 1 if it is and 0 if it is not.
 */
int is_palindrome(char *s)
int check_pal(char *s, int 1, int len)
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 *_strlen_recursion - function that returns the length of a string
 *@s:pointer with the address of the string
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
