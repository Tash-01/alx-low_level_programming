#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: content to be appended
 *
 * Reteurn: 1 on success, and -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, nrd;
	int nwrt = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)

	{
		while (text_content[nwrt])
			nwrt++;
		nrd = write(file, text_content, nwrt);
		if (nrd != nwrt)
			return (-1);
	}
	close(file);
	return (1);
}
