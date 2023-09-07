#include "main.h"


/**
 * append_text_to_file - Append text at the end of a file.
 * @filename: name of file to create.
 * @text_content: text to write inside the file.
 *
 * Return: 1 if text_content was appened, -1 when unsuccessful.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_len = 0, filed;
	ssize_t bytes_Written;

	if (filename == NULL)
		return (-1);

	filed = open(filename, O_WRONLY | O_APPEND);

	if (filed == -1)
		return (-1);

	if (text_content != NULL)
	{

		while (text_content[file_len] != '\0')
		{
			file_len++;
		}


		bytes_Written = write(filed, text_content, file_len);


		if (bytes_Written == -1)
		{
			return (-1);
		}
	}

	close(filed);
	return (1);
}
