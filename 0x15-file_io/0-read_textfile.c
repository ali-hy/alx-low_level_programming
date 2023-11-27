#include "main.h"

/**
 * read_textfile - writes the contents of a file to stdout
 * @filename: name of the file to print
 * @letters: number of letters to be printed
 * Return: length of content printed to stdout, or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY),
		res = 0, read_size = 0, write_size = 0;
	char buf[BUFF_SIZE];

	if (file == -1)
		return (0);

	read_size = read(file, buf, BUFF_SIZE);
	while (read_size > 0)
	{
		/* don't exceed letters */
		if ((size_t)(res + read_size) > letters)
			read_size = letters - res;

		write_size = write(STDOUT_FILENO, buf, read_size);
		if (write_size != read_size)
			return (0);

		res += write_size;
		if ((size_t)res == letters)
		{
			close(file);
			return (res);
		}

		read_size = read(file, buf, BUFF_SIZE);
	}

	close(file);
	return (res);
}
