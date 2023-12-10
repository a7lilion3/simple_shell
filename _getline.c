#include "main.h"

/**
 * _getline - read a line from stdin
 * @prompt: const char *
 *
 * Return: char *
 */
char *_getline(const char *prompt)
{
	char *buffer, c;
	int i = 0, nbytes;

	buffer = malloc(MAX_INPUT_SIZE);
	if (!buffer)
		return (NULL);
	_print(prompt);
	while (1)
	{
		fflush(stdin);
		fflush(stdout);
		nbytes = read(STDIN_FILENO, &c, 1);
		if (nbytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		if (nbytes == 0 || c == '\n')
		{
			buffer[i] = '\0';
			break;
		}
		else
		{
			if (i < MAX_INPUT_SIZE - 1)
				buffer[i++] = c;
			else
			{
				free(buffer);
				return (NULL);
			}
		}
	}
	if (i == 0 && nbytes == 0)
	{
		_print("\n");
		free(buffer);
		return (NULL);
	}
	return (buffer);
}
