#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: destination
 *@src: source string
 *@n: bytes from src to use
 *Return: string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
