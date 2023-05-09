#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints to the POSIX standard output
 * @filename: nam3 of the file to be read
 * @letters: number of the letters to read and print
 *
 * Return: numbet ofbthe letters printed, or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int nrd, nwrt;
	char *bff;

	bff = malloc(sizeof(*bff) * (letters + 1));
	if (filename == NULL || bff == NULL)
	{
		if (!bff)
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	nrd = read(file, bff, letters);
	if (nrd == -1)
		return (0);
	bff[nrd] = '\0';
	nwrt = write(STDOUT_FILENO, bff, nrd);
	if (nrd != nwrt)
		return (0);
	free(bff);
	close(file);
	return (nrd);
}

