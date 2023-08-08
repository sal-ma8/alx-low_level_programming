#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- func
 * @filename: vp2
 * @letters: vp1
 * Return: num
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bff_;
	ssize_t fadi;
	ssize_t c, r;

	fadi = open(filename, O_RDONLY);
	if (fadi == -1)
		return (0);
	bff_ = malloc(sizeof(char) * letters);
	r = read(fadi, bff_, letters);
	c = write(STDOUT_FILENO, bff_, r);

	free(bff_);
	close(fadi);
	return (c);
}
