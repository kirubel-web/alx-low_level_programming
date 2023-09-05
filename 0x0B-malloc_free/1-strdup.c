#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++) /* strlen(str); */
		;

	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);

	for (i = 0; i < len; i++) /* strcpy(dup, str); */
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}
