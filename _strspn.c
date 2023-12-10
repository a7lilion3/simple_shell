#include "main.h"

/**
 * _strspn - ret len of initial seg with accept in it
 * @s: const char *
 * @accept: const char *
 *
 * Return: size_t
 */
size_t _strspn(const char *s, const char *accept)
{
	size_t count = 0;

	while (*s != '\0' && _strchr(accept, *s) != NULL)
	{
		++count;
		++s;
	}

	return (count);
}
