#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed, or 0 if an error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fy;
	ssize_t len_read, len_written;
	char *buf;

	if (filename == NULL)
		return (0);

	fy = open(filename, O_RDONLY);
	if (fy == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fy);
		return (0);
	}

	len_read = read(fy, buf, letters);
	if (len_read == -1)
	{
		free(buf);
		close(fy);
		return (0);
	}

	len_written = write(STDOUT_FILENO, buf, len_read);
	if (len_written == -1 || len_written != len_read)
	{
		free(buf);
		close(fy);
		return (0);
	}

	free(buf);
	close(fy);

	return (len_written);
}
