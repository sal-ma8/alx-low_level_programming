#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - func0
 * @file: vp1
 * Return: char
 */
char *create_buffer(char *file)
{
	char *sc;

	sc = malloc(sizeof(char) * 1024);

	if (sc == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (sc);
}

/**
 * close_file - func1
 * @fd: th
 */
void close_file(int fd)
{
	int kf;

	kf = close(fd);

	if (kf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - func2
 * @argc: vp2
 * @argv: vp2
 * Return: m
 */
int main(int argc, char *argv[])
{
	int h, ni, ta, g;
	char *bfff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bfff = create_buffer(argv[2]);
	h = open(argv[1], O_RDONLY);
	ta = read(h, bfff, 1024);
	ni = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (h == -1 || ta == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bfff);
			exit(98);
		}
		g = write(ni, bfff, ta);

		if (ni == -1 || g == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bfff);
			exit(99);
		}

		ta = read(h, bfff, 1024);
		ni = open(argv[2], O_WRONLY | O_APPEND);

	} while (ta > 0);

	free(bfff);
	close_file(h);
	close_file(ni);

	return (0);
}
