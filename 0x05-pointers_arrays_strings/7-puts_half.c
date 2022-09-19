#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	char a = 0;
	int c;

	while (*(str + a))
		a++;
	{
		c = a / 2
			_putchar(c);
	}
	if (a % 2 == 0)
	{
		_putchar(a);
	}
	else
	{
		c = a - 1 / 2;
		_putchar(c);
	}
	_putchar('\n');
}
