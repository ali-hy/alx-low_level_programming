#include "main.h"

/**
 * safe_close - close file descriptor, but exit program if failed
 * @fd1: first file descriptor
 * @fd2: second file descriptor
 */
void safe_close(int fd1, int fd2)
{
	if (fd1 > -1)
		if (close(fd1) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
			exit(100);
		}
	if (fd2 > -1)
		if (close(fd2) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
			exit(100);
		}
}

/**
 * reading_err - handle file reading error
 * @file_name: name of file failed to read from
 * @fd1: file descriptor of first file to close
 * @fd2: file descriptor of second file to close
 */
void reading_err(char *file_name, int fd1, int fd2)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
	safe_close(fd1, fd2);
	exit(98);
}

/**
 * writing_err - handle file reading error
 * @file_name: name of file failed to write to
 * @fd1: file descriptor of first file to close
 * @fd2: file descriptor of second file to close
 */
void writing_err(char *file_name, int fd1, int fd2)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
	safe_close(fd1, fd2);
	exit(99);
}

/**
 * main - copy a file
 * @argc: argument count
 * @argv: argument list
 * Return: 0 on success, other numbers on fail
 */
int main(int argc, char **argv)
{
	int file_from = open(argv[1], O_RDONLY),
		file_to, read_size;
	char buf[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (file_from == -1)
		reading_err(argv[1], -1, -1);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
				   S_IRUSR | S_IRGRP | S_IROTH | S_IWUSR | S_IWGRP);

	if (file_to == -1)
		writing_err(argv[2], file_from, -1);

	read_size = read(file_from, buf, BUFF_SIZE);
	while (read_size == BUFF_SIZE)
	{
		if (write(file_to, buf, read_size) < 0)
			writing_err(argv[2], file_from, file_to);
		read_size = read(file_from, buf, BUFF_SIZE);
	}
	if (read_size > 0 && write(file_to, buf, read_size) < 0)
		writing_err(argv[2], file_from, file_to);
	if (read_size == -1)
		reading_err(argv[1], file_from, file_to);

	safe_close(file_from, file_to);
	return (0);
}
