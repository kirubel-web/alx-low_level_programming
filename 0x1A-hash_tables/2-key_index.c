#include "hash_tables.h"

/**
 * key_index - return the index of a key
 * @key: key
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair should be
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2((const unsigned char *)key);
	return (hash % size);
}
