#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *  @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0, b = 0;
	char str[500];

	while (*(s + a))
	{
		*(str + a) = *(s + a);
		a++;
	}
	a = a - 1;
	while (a >= 0)
	{
		*(s + a) = *(str + b);
		b++;
		a--
	}
}