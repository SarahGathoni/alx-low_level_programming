#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	long int sum;
	long int a, b;
	int count;

	sum = 0;
	a = 0;
	b = 1;
	count = 0;

	while (count < 49)
	{
		sum = a + b;
		printf("%li, ", sum);
		a = b;
		b = sum;

		count++;
	}
	sum = a + b;
	printf("%li\n", sum);
	return (0);
}
