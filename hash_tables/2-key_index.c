#include "hash_tables.h"
/**
 * key_index - a function to get the index of a key
 * @key: pointer to key
 * @size:  table size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
