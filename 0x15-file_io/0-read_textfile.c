#include "main.h"

/**
 * read_textfile - function that reads a file and
 * prints it to the POSIX standard output.
 * @filename: the filename
 * @letters: number of letters to read and print
 * Return: Number of letters || 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;

	ssize_t _read, _write;

	char *buffer;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	_read = read(f, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1 || _write != _read)
	{
		free(buffer);
		close(f);
		return (0);
	}
	close(f);
	return (_read);


}
