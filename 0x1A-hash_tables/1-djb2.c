#include "hash_tables.h"

/**
 * hash_djb2 - function that generates a random number using
 * a string given (hash number)
 *
 * @str: string
 * Return: hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int ht;
	int x;

	ht = 5381;
	while ((x = *str++))
	{
		ht = ((ht << 5) + ht) + x; /* ht * 33 + c */
	}
	return (ht);
}
