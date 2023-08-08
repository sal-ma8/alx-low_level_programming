#include "main.h"

/**
 * create_file - func1
 * @filename: vp1
 * @text_content: vp2
 * Return:num
 */
int create_file(const char *filename, char *text_content)
{
	int sa, h, nl = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (nl = 0; text_content[nl];)
			nl++;
	}

	sa = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	h = write(sa, text_content, nl);

	if (sa == -1 || h == -1)
		return (-1);

	close(sa);

	return (1);
}
