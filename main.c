#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0.
 */
int main(void)
{
	char **tokens;
	char *line;

	while ((line = _getline("% ")))
	{
		if (line[0] == '\n')
		{
			free(line);
			continue;
		}
		tokens = _split(line, " \n");
		exec_cmd(tokens);
		free(line);
		free_token_array(tokens);
	}

	return (0);
}
