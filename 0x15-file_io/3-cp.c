#include "main.h"

#include <stdio.h>

#define BUFSIZE 1024
/**
* error_exit - prints error and exit
* @code: integer
* @message: shows  characters
*
* Return: no return.
*/
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
* main - checks the code.
* @argc: Number of arguments.
* @argv: Arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	ssize_t bytesread, byteswritten;
	char buffer[BUFSIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file  %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytesread = read(from_fd, buffer, BUFSIZE)) > 0)
	{
		byteswritten = write(to_fd, buffer, bytesread);
		if (byteswritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytesread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file  %s\n", argv[1]);
		exit(98);
	}
	if (close(from_fd) == -1 || close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}
	return (0);
}
