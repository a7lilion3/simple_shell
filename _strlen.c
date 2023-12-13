#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: const char *
 *
 * Return: size_t
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s[len])
		len++;
	return (len);
}
