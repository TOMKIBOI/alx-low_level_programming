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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
