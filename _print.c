#include "main.h"

/**
 * _print - print a string to std output
 * @s: const char *
 *
 * Return: ssize_t.
 */
ssize_t _print(const char *s)
{
	return (write(STDOUT_FILENO, s, _strlen(s)));
}
