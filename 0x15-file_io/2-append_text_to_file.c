#include "main.h"

/**
 * append_text_to_file - func1
 * @filename: vp1
 * @text_content: vp2
 * Return: num
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int h, s, na = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (na = 0; text_content[na];)
			na++;
	}

	h = open(filename, O_WRONLY | O_APPEND);
	s = write(h, text_content, na);

	if (h == -1 || s == -1)
		return (-1);

	close(h);

	return (1);
}
