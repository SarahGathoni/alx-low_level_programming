#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */
char *rot13(char *s)
{
	int c, d;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; *(s + c); c++)
	{
		for (d = 0; d < 52; d++)
		{
			if (a[b] == *(s + a))
			{
				*(s + a) = b[d];
				break;
			}
		}
	}
	return (s);
}
