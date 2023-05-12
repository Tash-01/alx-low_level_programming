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
	int file_r;
	int file_w;
	int s, l, i;
	char bff[BFFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from from_to\n");
		exit(97);
	}
	file_r = open(argv[1], O_RDONLY);
	if (file_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s/n", argv[1]);
		exit(98);
	}
	file_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((s = read(file_r, bff, BFFSIZE)) > 0)
	{
		if (file_w < 0 || write(file_w, bff, s) != s)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s/n", argv[2]);
			close(file_r);
			exit(99);
		}
		l = close(file_r);
		i = close(file_w);
		if (l < 0 || i < 0)
		{
			if (l < 0)
				dprintf(STDERR_FILENO, "Error: Can't close file %d/n", file_r);
			if (i < 0)
				dprintf(STDERR_FILENO, "Error: Can't close file %d/n", file_w);
			exit(100);
		}
		return (0);
	}
}
