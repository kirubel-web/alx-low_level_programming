#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * copy_word - copies a word from a string
 * @str: string to copy from
 * @start: start index of word
 * @end: end index of word
 *
 * Return: pointer to word
 */
char *copy_word(char *str, int start, int end)
{
	char *word;
	int i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);

	for (i = 0; i < end - start; i++)
		word[i] = str[start + i];
	word[i] = '\0';

	return (word);
}

/**
 * count_words - counts the number of words in a string
 * @str: string to count
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int word_count = 0, str_len, i;

	if (!str || !str[0])
		return (0);

	str_len = _strlen(str);

	for (i = 0; i < str_len; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;
	}

	return (word_count);
}

/**
 * free_words - frees an array of words
 * @words: array of words
 * @word_count: number of words
 * Return: nothing
 */
void free_words(char **words, int word_count)
{
	int i;

	for (i = 0; i < word_count; i++)
		free(words[i]);
	free(words);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int word_count, str_len, start = 0, end, index = 0, i;

	word_count = count_words(str);
	if (!word_count)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (!words)
		return (NULL);

	str_len = _strlen(str);
	for (i = 0; i < str_len; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || !str[i + 1]))
		{
			end = i + 1;
			words[index] = copy_word(str, start, end);
			if (!words[index])
				return (free_words(words, index), NULL);
			index++;
		} else if (str[i] != ' ' && str[i + 1] != ' ')
			continue;
		else
			start = i + 1;
	}

	return (words);
}
