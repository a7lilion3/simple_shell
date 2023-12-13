#include "shell.h"

/**
 * print - print str
 * @str: const char *
 *
 * Return: void
 */
void print(const char *str)
{
	write(STDOUT_FILENO, str, strLength(str));
}
