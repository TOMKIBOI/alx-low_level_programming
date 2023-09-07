#include "main.h"

/**
 * create_file - function prototype that creats a file.
 * @filename: name of file to create.
 * @text_content: text to write inside the file.
 *
 * Return: 1 if text_content was appened, -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int filed;

	if (filename == NULL)
		return (-1);

	filed = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filed == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t write_result = write(filed, text_content, strlen(text_content));

		if (write_result == -1)
		{
			close(filed);
			return (-1);
		}
	}

	close(filed);
	return (1);
}
