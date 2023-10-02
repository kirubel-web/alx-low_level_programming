#include "main.h"
/**
 * read_textfile - function read text file and prints it to output
 * @filename: file to be read
 * @letters: letters to read and print
 * Return: the number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ed;
	int i, e;
	char *bue;

	if (!filename)
		return (0);
	ed = open(filename, O_RDONLY);
	if (ed < 0)
		return (0);
	bue = malloc(sizeof(char) * letters);
	if (!bue)
		return (0);
	i = read(ed, bue, letters);
	if (i < 0)
	{
		free(bue);
		return (0);
	}
	bue[i] = '\0';
	close(ed);
	e = write(STDOUT_FILENO, bue, i);
	if (e < 0)
	{
		free(bue);
		return (0);
	}
	free(bue);
	return (e);
}
