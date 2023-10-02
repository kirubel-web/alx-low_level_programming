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
	char *buf;

	if (!filename)
		return (0);
	ed = open(filename, O_RDONLY);
	if (ed < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(fd, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(ed);
	y = write(STDOUT_FILENO, buf, i);
	if (e < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (e);
}
