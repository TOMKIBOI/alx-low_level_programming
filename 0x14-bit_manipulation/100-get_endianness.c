#include "main.h"

/**
* get_endianness - checks the endianess
*
* Return: endianesses
*/
int get_endianness(void)
{
	unsigned int end = 1;

	unsigned char *ianess = (unsigned char *)&end;

	return (*ianess == 1);
}
