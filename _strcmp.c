#include "main.h"

/**
 * _strcmp - compares two strings and return an int
 * @s1: const char *
 * @s2: const char *
 *
 * Return: int
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		++s1;
		++s2;
	}

	return (*s1 - *s2);
}
