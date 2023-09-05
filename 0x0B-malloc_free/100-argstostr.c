#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	/* check for NULL */
	if (!ac || !av)
		return (NULL);

	/* get length of resulting string */
	for (i = 0, len = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	/* allocate memory for string */
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	/* copy arguments into string */
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
