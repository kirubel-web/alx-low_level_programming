#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - a program that adds positive numbers
* @argc: the number of command-line arguments
* @argv: an array of strings containing the command-line arguments
* Return: returns 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *ptr = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		sum += strtol(argv[i], &ptr, 10);
		if (*ptr != 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
