#include <stdio.h>

/**
* main - a program that prints the number of arguments passed into it
* @argc: the number of command-line arguments
* @argv: an array of strings containing the command-line arguments
* Return: returns 0 (success)
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
