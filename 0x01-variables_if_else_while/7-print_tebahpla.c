#include <stdio.h>

/**
 * main - Prints the alphabet at reverse
 *
 * Return: Always (Success)
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
