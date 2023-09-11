#include <stdio.h>
#include <stdlib.h>

char **strtow(char *);

/**
 * print_tab - Prints an array of string
 *
 * @tab: The array to print
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	char **tab;
	int i;

	tab = strtow("      Talk        is     cheap.       Show      me     the    code.        ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	for (i = 0; tab[i] != NULL; i++)
		free(tab[i]);


	tab = strtow("Talk is cheap. Show me the code.");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	for (i = 0; tab[i] != NULL; i++)
		free(tab[i]);

	tab = strtow(" !@#$^&*(())_Talk ><><.., ][{} 76478 is ~~ cheap :) . Show #$45&*(45 me 873589 the |[]{} -_=+ code.^& ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	for (i = 0; tab[i] != NULL; i++)
		free(tab[i]);

	tab = strtow(" ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	for (i = 0; tab[i] != NULL; i++)
		free(tab[i]);

	tab = strtow("");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	for (i = 0; tab[i] != NULL; i++)
		free(tab[i]);

	return (0);
}
