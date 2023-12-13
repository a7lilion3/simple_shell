#include "shell.h"

/**
 * main - entry point
 *
 * Return: 0 if it's correct.
 */
int main(void)
{
	char *command = NULL;
	int result;

	while (1)
	{
		displayPrompt();
		result = readCommand(&command);

		if (result == 0)
			break;

		if (strLength(command) > 0)
			executeCommand(command);
	}

	free(command);
	return (0);
}
