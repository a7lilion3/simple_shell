#include "main.h"

/**
 * _strcspn - string complement span
 * @s: const char *
 * @reject: const char *
 *
 * Return: size_t
 */
size_t _strcspn(const char *s, const char *reject)
{
	size_t count = 0;

	while (*s != '\0' && _strchr(reject, *s) == NULL)
	{
		++count;
		++s;
	}

	return (count);
}
