#include "main.h"

/**
 * _atoi - qwer
 * @s: qwer
 * Return: wer
 */

int _atoi(char *s)
{
	int sn = 1, h = 0;
	unsigned int res = 0;

	while (!(s[h] <= '9' && s[h] >= '0') && s[h] != '\0')
	{
		if (s[h] == '-')
			sn *= -1;
		h++;
	}
	while (s[h] <= '9' && (s[h] >= '0' && s[h] != '\0'))
	{
		res = (res * 10) + (s[h] - '0');
		h++;
	}
	res *= sn;
	return (res);
}
