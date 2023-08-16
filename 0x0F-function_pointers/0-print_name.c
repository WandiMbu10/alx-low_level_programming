#include "main.h"
#include <stdio.h>

/**
 * print_name - this function prints a name
 * @name: char string
 * @f: function pointer tanking arguments from string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
	return;
	}
	f(name);
}
