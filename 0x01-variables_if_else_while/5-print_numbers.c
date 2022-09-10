#include <stdio.h>

/**
 * main - Prints the numbers since 0 to 9
 *
 * Return: Always (Success)
 */
int main(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
