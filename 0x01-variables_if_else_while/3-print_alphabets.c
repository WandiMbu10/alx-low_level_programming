#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print alphabet lowercase and uppercase'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lowercase = 'a';
	int uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase += 1;
	}
	while (uppercase <= 'z')
	{
		putchar(uppercase);
		uppercase += 1;
	}
	putchar('\n');
	return (0);
}
