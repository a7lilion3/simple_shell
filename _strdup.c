#include "main.h"

/**
 * _strdup - return a duplicate of a string
 * @s: const char *
 *
 * Return: char *
 */
char *_strdup(const char *s)
{
	size_t len;
	char *dup;

	len = _strlen(s) + 1;

	/* allocate memory for the new string */
	dup = malloc(len);

	if (dup == NULL)
		return (NULL);

	_strcpy(dup, s);

	return (dup);
}
