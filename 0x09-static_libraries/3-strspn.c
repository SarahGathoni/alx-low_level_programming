#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int prefix;

	while (*s)
	{
		for (prefix = 0; accept[prefix]; prefix++)
		{
			if (*s == accept[prefix])
			{
				bytes++;
				break;
			}
			else if (accept[prefix + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	return (bytes);
}
