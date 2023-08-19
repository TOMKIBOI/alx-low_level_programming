#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments counter
 * @argv: array of arguments vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int byte, k;
	char *opc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opc = (char *)main;

	for (k = 0; k < byte; k++)
	{
		if (k == byte - 1)
		{
			printf("%02hhx\n", opc[k]);
			break;
		}
		printf("%02hhx ", opc[k]);
	}
	return (0);
}
