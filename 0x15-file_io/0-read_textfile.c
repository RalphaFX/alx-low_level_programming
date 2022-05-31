#include "main.h"

/**
 * read_textfile - reads a text from file and prints it out to
 * POSIX stout
 * @filename: name of the text file
 * @letters: number of letters to read and print
 *
 * Return: the number of the letters printed or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int rd;
	int wr;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	rd = read(fd, buff, letters);

	wr = write(STDOUT_FILENO, buff, rd);

	close(fd);
	free(buff);
	return (wr);
}
