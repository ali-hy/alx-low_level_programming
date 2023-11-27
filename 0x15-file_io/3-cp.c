#include "main.h"

/**
 * reading_err - handle file reading error
 * @file_name: name of file failed to read from
 */
void reading_err(char *file_name)
{
	dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", file_name);
}

/**
 * writing_err - handle file reading error
 * @file_name: name of file failed to write to
 */
void writing_err(char *file_name)
{
	dprintf(STDOUT_FILENO, "Error: Can't write to file %s\n", file_name);
}

/**
 * safe_close - close file discriptor, but exit program if failed
 * @file_discriptor: file discriptor of file to close
 */
void safe_close(int file_discriptor)
{
	if (close(file_discriptor) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", file_discriptor);
		exit(100);
	}
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
		file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
					   S_IRUSR | S_IRGRP | S_IROTH | S_IWUSR | S_IWGRP),
		read_size;
	char buf[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (file_from == -1)
	{
		reading_err(argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		writing_err(argv[2]);
		safe_close(file_from);
		exit(99);
	}

	read_size = read(file_from, buf, BUFF_SIZE);
	while (read_size > 0)
	{
		if (write(file_to, buf, read_size) < 0)
		{
			writing_err(argv[2]);
			safe_close(file_from);
			safe_close(file_to);
			exit(99);
		}
		read_size = read(file_from, buf, BUFF_SIZE);
	}
	if (read_size == -1)
	{
		reading_err(argv[1]);
		safe_close(file_from);
		safe_close(file_to);
		exit(98);
	}

	return (0);
}
