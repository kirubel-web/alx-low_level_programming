#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int s1_len, s2_len, i, j;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

	for (s1_len = 0; s1[s1_len]; s1_len++)
		;
	for (s2_len = 0; s2[s2_len]; s2_len++)
		;

	new = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		new[i] = s1[i];

	for (j = 0; j < s2_len; j++)
		new[i + j] = s2[j];

	new[i + j] = '\0';

	return (new);
}
