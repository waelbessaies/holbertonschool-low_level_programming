#include "hash_tables.h"
/**
 * key_index - give you index of a key
 * @key: the key to hash and find index from
 * @size: the size of our hash
 * Return: Index position
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
