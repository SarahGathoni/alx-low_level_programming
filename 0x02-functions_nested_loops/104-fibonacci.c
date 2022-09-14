#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	unsigned long int a, n, e, e1, n2, m1, e2;

	n = 1;
	e = 2;

	printf("%lu", n);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", e);
		e = e + n;
		n = e - n;
	}

	n1 = n / 1000000000;
	n2 = n % 1000000000;
	e1 = e / 1000000000;
	e2 = e % 1000000000;

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", e1 + (e2 / 1000000000));
		printf("%lu", e2 % 1000000000);
		e1 = e1 + n1;
		n1 = e1 - n1;
		e2 = e2 + j2;
		n2 = n2 - n2;
	}
	printf("\n");
	return (0);
}
