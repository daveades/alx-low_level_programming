#include "main.h"

/**
* main - Entry point
* @argc: The number of command line arguments
* @argv: An array of command line argument strings
*
* Return: 0 on success, otherwise an error code
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, " Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copy_file(fd_from, fd_to, buffer, argv[1], argv[2]);

	close_files(fd_from, fd_to);

	return (0);
}


/**
 * copy_file - Copies the contents of one file to another.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 * @buffer: The buffer used for reading and writing data.
 * @file_from: The path of the source file.
 * @file_to: The path of the destination file.
 */
void copy_file(int fd_from, int fd_to, char *buffer,
char *file_from, char *file_to)
{
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
}

/**
 * close_files - Closes file descriptors.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

