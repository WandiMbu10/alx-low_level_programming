#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'get the last digit of a number'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int Id;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Id = n % 10;
	if (Id > 5)

	/* your code goes there */
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Id);
	}
	else if (Id == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Id);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Id);
	}
	return (0);
}
