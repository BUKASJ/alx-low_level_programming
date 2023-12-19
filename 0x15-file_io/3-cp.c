#include "main.h"

/**
 * close_files - close file descriptors
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 */

void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
}

/**
 * copy_file - copy content from source file to destination file
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @buf: buffer for reading and writing
 * @file_from: name of the source file
 * @file_to: name of the destination file
 *
 * Return: 0 on success, 1 on failure
 */

int copy_file(int fd_from, int fd_to, char *buf, const char *file_from,
		const char *file_to)
{
	int read_result, write_result;

	while ((read_result = read(fd_from, buf, 1024)) > 0)
	{
		write_result = write(fd_to, buf, read_result);
		if (write_result == -1 || write_result != read_result)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			return (1);
		}
	}

	if (read_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (1);
	}

	return (0);
}

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 97, 98, 99, or 100 on failure
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_files(fd_from, fd_to);
		return (99);
	}

	if (copy_file(fd_from, fd_to, buf, argv[1], argv[2]) != 0)
	{
		close_files(fd_from, fd_to);
		return (99);
	}

	close_files(fd_from, fd_to);

	return (0);
}
