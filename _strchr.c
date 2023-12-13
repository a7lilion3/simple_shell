#include "main.h"

/**
 * _strchr - searches for first oc and ret p to it
 * @s: const char *
 * @c: int
 *
 * Return: char *
 */
char *_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}

	return (NULL);
}
