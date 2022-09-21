#include "main.h"
#include <stdio.h>

/**
 * _strncpy - cpoies n bytes of src to the dest string
 * @dest: string to copy or destination
 *  @src: string being copied or source
 *  @n: largest number of bytes to copy
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	strcpy(*dest, *src);
	while (a < n)
	{
		*(dest + a) = '\0';
		a++;
	}
	return (dest);
}