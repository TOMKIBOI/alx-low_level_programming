#include <stdio.h>

/**
* main -prints its name
* @argc: number of command
* @argv: array 
* Return: (0) always success
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
