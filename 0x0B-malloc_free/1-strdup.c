#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 *  Return: If str == NULL or insufficient memory is available - NULL.
 *          Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str);
{
	char *strdupli;
	int index, length = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		length++;

	strdupli =  malloc(sizeof(char) * (len + 1));

	if (strdupli == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		strdupi[index] = str[index];

	strdupli[length] = '\0';

	return (strdupli);
}
