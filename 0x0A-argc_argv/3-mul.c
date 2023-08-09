#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two intergers
* @argc: number of command line arg
* @argv: array tha contains the program command line arg
* Return: (0) aways success
*/
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[2]) * atoi(argv[3]));
	return (0);
}
