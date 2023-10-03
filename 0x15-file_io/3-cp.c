#include "main.h"

char *create_buffer(char *file);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)

{
char *buffer;
buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
	dprintf(STDERR_FILENO,
	"Error: unable to write file %s\n", file);
	exit(99);
}
	return (buffer);
}

/**
 * close_file - this Closes file descriptors.
 * @file: The file descriptor that is to be closed.
 */

void close_file(int file)
{
	int c_file;
	c_file = close(file);

	if (c_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file);
		exit(100);
	}
}

/**
 * main - thsi is a Copies the contents of a file to another file.
 * @argc: holds The number of arguments supplied to the program.
 * @argv: represents An array of pointers to the arguments.
 * Return: 0 on success.
 * Description: If the argument count is not correct - exit code 97.
 * If file_from does not exist or unable to be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{

	int from_file, to_file, read_file, write_file;
	char *buffer;

	if (argc != 3)
	{

		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from_file = open(argv[1], O_RDONLY);
	read_file = read(from_file, buffer, 1024);
	to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_file == -1 || read_file == -1)
	{

		dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]);

		free(buffer);
		exit(98);
	}

		write_file = write(to_file, buffer, read_file);

		if (to_file == -1 || write_file == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}

		read_file = read(from_file, buffer, 1024);
		to_file = open(argv[2], O_WRONLY | O_APPEND);
		}
	while (read_file > 0);
	free(buffer);
	close_file(from_file);
	close_file(to_file);
	return (0);
}
