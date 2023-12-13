#include "shell.h"

/**
 * readCommand - read command
 * @command: char **
 *
 * Return: int
 */
int readCommand(char **command)
{
	size_t len = 0;
	ssize_t read;

	read = getline(command, &len, stdin);

	/* Directly checking the return value of getline for EOF */
	if (read == -1)
	{
		print("\n");
		return (0);
	}

	if (read > 0 && (*command)[read - 1] == '\n')
		(*command)[read - 1] = '\0'; /* Remove newline */

	return (1);
}
