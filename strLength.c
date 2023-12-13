#include "shell.h"

/**
 * strLength - calc the length of s
 * @str: const char *
 * Return: int
 */
int strLength(const char *str)
{
	int length  = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}
