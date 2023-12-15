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
		if (_strcmp(line, "") == 0)
		{
			free(line);
			continue;
		}
		tokens = _split(line, " \n");
		if (_strcmp("exit", tokens[0]) == 0)
		{
			free(line);
			free_token_array(tokens);
			return (2);
		}
		exec_cmd(tokens);
		free(line);
		free_token_array(tokens);

		if (!isatty(STDIN_FILENO))
			return (0);
	}

	return (0);
}
