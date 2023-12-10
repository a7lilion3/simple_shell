#include "main.h"

/**
 * _strcpy - copy from src to dst.
 * @dst: char *
 * @src: const char *
 *
 * Return: char *
 */
char *_strcpy(char *dst, const char *src)
{
	char *odst = dst;

	while (*src != '\0')
		*dst++ = *src++;
	*dst = '\0';

	return (odst);
}
