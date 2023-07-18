#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * main - Entry point
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 'a'; i <= 'z'; j++)
		{
			_putchar(j);
		}
	}
		_putchar('\n');
		i++;
}
int main(void)
{
	print_alphabet_x10();
	return (0);
}
