#include "main.h"

/**
 * create_file - creates and fills a file
 * @filename: name of the file to create
 * @text_content: text to put in file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file,
		len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	while (text_content[len] != '\0')
		len++;

	if (write(file, text_content, len) == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
