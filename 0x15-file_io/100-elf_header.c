#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_address - address point
 * @ptr: pointer
 *
 * Return: nothing to return.
 */

void print_address(char *ptr)
{
	int x;
	int start;
	char file;

	printf(" Entry point adress: 0x");

	file = ptr[4] + '0';

	if (file == '1')
	{
		start = 26;
		printf("80");
		for (x = start; x >= 22; x--)
		{
			if (ptr[x] > 0)

				printf("%x", ptr[x]);
			else if (ptr[x] < 0)
				printf("%x", 256 + ptr[x]);
		}
		if (ptr[7] == 6)
			printf("00");
	}

	if (file == '2')
	{
		start = 26;
		for (x = start; x > 23; x--)
		{
			if (ptr[x] >= 0)
				printf("%02x", ptr[x]);

			else if (ptr[x] < 0)
				printf("%02x", 256 + ptr[x]);
		}
	}
	printf("\n");
}

/**
 * print_type - printype
 * @ptr: pointer.
 * Return: nothing to return
 */
void print_type(char *ptr)
{
	char type = ptr[16];

	if (ptr[5] == 1)
		type = ptr[16];
	else
		type = ptr[17];

	printf(" Type:   ");
	if (type == 0)
		printf("NONE (No file type)\n");
	else if (type == 1)
		printf("REL (Relocatable file\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}
