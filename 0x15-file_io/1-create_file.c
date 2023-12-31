#include "main.h"
/**
 * create_file - creates a file and writes content into it
 * @filename: pointer to a file
 * @text_content: pointer to a string to be written
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fl, tally = 0, i;

	if (filename == NULL)
		return (-1);
	fl = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fl == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			tally = write(fl, &text_content[i], 1);
			if (tally == -1)
			{
				close(fl);
				return (-1);
			}
		}
	}
	close(fl);

	return (1);
}
