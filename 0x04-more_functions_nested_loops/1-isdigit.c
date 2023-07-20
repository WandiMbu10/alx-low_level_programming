#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Returns 1 if c is a digit
 * Returns 0 otherwise
 * Return: 0 Always
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
