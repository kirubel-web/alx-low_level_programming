#include <stdio.h>
#include "main.h"
/**
 * main - prints its name followed by anew line
 * @argc: is an argulment counter
 * @argv: is an argument value
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
