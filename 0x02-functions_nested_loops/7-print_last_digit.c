#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 *
 * Description: prints the last digit of a number
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int b = n % 10;

	if (n < 0)
		b = b * -1;
	_putchar(b + '0');
	return (b);
}
