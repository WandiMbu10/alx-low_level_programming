#include "main.h"

/**
 * is_palindrome - string is palindrome
 * @s: string to reverse
 * Return: 1 is it is, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the lenth
 * Return: lenth of string
 */
int _strlen_recursion(char *S)
{
	if (*s == '\0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the character
 * @s: string to check
 * @i: iterator
 * @len: length of string
 * Return: 1 if palindeome, 0 if not
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}