#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - copies the content of one file to another
 * @argc: arguments count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, wrote, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IWGRP | S_IROTH;
	char bff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat((src, -1, argv[1], 'O');
	dest = open(argv[2], O_WONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(dest, -1, argv[2], 'W');
	while (n_read == 1024)

	{
		n_read = read(src, bff, sizeof(bff));
		if (n_read == -1)
			check_IO_stat(-1, -1, agrv[1], 'O');
		wrote = write(dest, bff, n_read);
		if (wrot == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL,  'C');
	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');
	Return(0);
}

/**
 * check_IO_stat - checkd if a f8le can be opened or closed
 * @stat: element for the file to be  opened
 * @filename: the name of the file
 * @file: file descriptor
 * @mode: closing or opening
 *
 * Return: 0
 */
void check_IO_stat(int stat, int file, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s/n", filename);
		exit(99);
	}
}
