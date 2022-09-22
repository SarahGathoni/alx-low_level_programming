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
	char a[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int indx1 = 0, indx2;

	while (str[indx1])
	{
		for (indx2 = 0; indx2 < 52; indx2++)
		{
			if (str[indx1] == alphabet[indx2])
			{
				str[indx1] = a[indx2];
				break;
			}
		}

		indx1++;
	}
	return (str);
}
