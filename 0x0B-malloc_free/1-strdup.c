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
	int index, length = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		length++;

	str =  malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		str[index] = str[index];

	str[length] = '\0';

	return (str);
}
