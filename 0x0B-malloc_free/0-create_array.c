#include "main.h"
#include <stdlib.h>
/**
 * create_array - fu1
 * @size: arg_num
 * @c: arh_num
 * Return: wertyui
 */
char *create_array(unsigned int size, char c)
{
	char *sa;
	unsigned int ha;

	sa = malloc(sizeof(char) * size);
	if (size == 0 || sa == NULL)
		return (NULL);

	for (ha = 0; ha < size; ha++)
		sa[ha] = c;
	return (sa);
}
