#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determines if n is a printable ASCII char
 * @n: integer
 * Return: 1 if true, 0 if false
 */
int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - print hex values for string b in formatted form
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void printHexes(char *b, int start, int end)
{
	int m = 0;

	while (m < 10)
	{
		if (m < end)
			printf("%02x", *(b + start + m));
		else
			printf("  ");
		if (m % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - print ascii values for string b,
 * formatted to replace nonprintable chars with '.'
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void printASCII(char *b, int start, int end)
{
	int xter, m = 0;

	while (m < end)
	{
		xter = *(b + m + start);
		if (!isPrintableASCII(xter))
			xter = 46;
		printf("%c", xter);
		m++;
	}
}

/**
 * print_buffer - prints a buffer
 * @b: string
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}

