#include <stdio.h>

/**
 * main - Prints the numbers since 0 to 9
 *
 * Return: Always (Success)
 */
int main(void)
{
	int s;

	for (s = '0'; s <= '9'; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}

