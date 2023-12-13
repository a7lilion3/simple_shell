#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0.
 */
int main(void)
{
	char **tokens;
	char *line, *pr;

	if (isatty(STDIN_FILENO))
		pr = "($) ";
	else
		pr = "";

	while ((line = _getline(pr)))
	{
		if (line[0] == '\n')
		{
			free(line);
			continue;
		}
		tokens = _split(line, " \n");
		if (_strcmp("exit", tokens[0]) == 0)
			return (0);
		exec_cmd(tokens);
		free(line);
		free_token_array(tokens);
	}

	return (0);
}
