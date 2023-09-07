#include "main.h"

/**
* read_textfile - Reads a text file
* output.
* @filename: filename
* @letters: The no. of letters it should read and print.
*
* Return: number of letters it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed;
	ssize_t bytes2Read, bytes2bWritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	filed = open(filename, O_RDONLY);

	if (filed == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	bytes2Read = read(filed, buffer, letters);
	if (bytes2Read == -1)
	{
		free(buffer);
		return (0);
	}

	bytes2bWritten = write(STDOUT_FILENO, buffer, bytes2Read);
	if (bytes2bWritten == -1)
	{
		free(buffer);
		return (0);
	}
	close(filed);
	free(buffer);
	return (bytes2bWritten);
}
