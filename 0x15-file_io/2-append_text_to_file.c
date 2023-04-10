#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * 
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int d, y, len;

	if (filename == NULL)
		return (-1);

	d = open(filename, O_WRONLY | O_APPEND);

	if (d == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;

		y = write(d, text_content, len);

		if (y == -1)
		{
			close(d);
			return (-1);
		}
	}

	close(d);
	return (1);
}
