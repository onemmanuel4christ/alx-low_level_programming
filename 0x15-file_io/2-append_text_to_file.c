#include "main.h"

/**
 * append_text_to_file - A function to appends text at the end of a file.
 * @filename: A decleard pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, written_file, len = 0;

	if (filename == NULL)

		return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
		len++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	written_file = write(file, text_content, len);

	if (file == -1 || written_file == -1)
		return (-1);
	close(file);
	return (1);
}
