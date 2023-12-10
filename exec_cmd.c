#include "main.h"

/**
 * exec_cmd - execute a command from tokens
 * @tokens: char **
 *
 * Return: void
 */
void exec_cmd(char **tokens)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		perror(tokens[0]);
		free_token_array(tokens);
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (execve(tokens[0], tokens, NULL) == -1)
		{
			perror(tokens[0]);
			free_token_array(tokens);
			_exit(EXIT_FAILURE);
		}
	}
	else
		wait(NULL);
}
