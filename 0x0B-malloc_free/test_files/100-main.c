#include <stdio.h>
#include <stdlib.h>

char *argstostr(int, char **);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = argstostr(0, NULL);
	if (s == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
