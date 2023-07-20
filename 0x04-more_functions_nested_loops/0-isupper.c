#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: int to be checked
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 * Return: 0 Always (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
