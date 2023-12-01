#include "hash_tables.h"

/**
* hash_djb2 - hash function using the djb2 algorithm
 * @str: string to hash
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	if (str == NULL)
		return (0);

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
