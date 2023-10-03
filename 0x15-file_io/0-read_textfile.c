#include "main.h"

/**
 * read_textfile: a program to read a text file to STDOUT.
 * @filename: the test to be read
 * @letters: number of letters to be read
 * Return the biyte size 0 when funtion os -1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t file_write;
	ssize_t total;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	total = read(file, buffer, letters);
	file_write = write(STDOUT_FILENO, buffer, total);

	free(buffer);
	close(file);
	return (file_write);

}
