#include "main.h"

/**
 * _isalpha -  a function that checks for alphabetic character
 * @c: the int to check
 * Returns 1 if c is a letter, uppercase or lowercase
 * 0 otherwise
 */
int _isalpha(int c)
{
	/* check for c if its lowercase */
	if (c >= 'a' && c <= 'z')
		return (1);
	/* check for c if its uppercase */
	else if (c >= 'A' && c <= 'Z')
		return (1);
	/* otherwise c is not a letter */
	else
		return (0);
}
