#include <stdio.h>

/**
* main - prints all arg it receives
* @argc: number of command line arg
* @argv: array that contains the program command line arg
* Return: (0) always success
*/
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
