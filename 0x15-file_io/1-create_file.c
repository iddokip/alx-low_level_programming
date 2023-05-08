#include "main.h"

/**
 * create_file - reads a text file and prints it to stdout
 * Description: Create a file.
 * @filename: Name of the file 
 * @text_content: A NULL terminated string
 *
 * Return:value to return in success and on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, to_write, s = 0;

	if (!filename)
		return (-1);


	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	
	if (text_content)
	{
		
		while (text_content[s])
			s++;
		
		to_write = write(fd, text_content, s);
		if (to_write != s)
			return (-1);
	}

	close(fd);

	return (1);
}
