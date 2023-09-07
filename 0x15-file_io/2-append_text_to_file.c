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
	int reslt;
	FILE *file;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	file = fopen(filename, "a");

	if (file == NULL)
	{
		return (-1);
	}
	reslt = fprintf(file, "%s", text_content);

	fclose(file);

	if (reslt < 0)
	{
		return (-1);
	}
	return (1);
}
