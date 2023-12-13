#include "main.h"

/**
 * exec_cmd - execute a command from tokens
 * @tokens: char **
 *
 * Return: void
 */
void exec_cmd(char **tokens)
{
	char *full_path;
	pid_t pid;

	if (tokens == NULL || tokens[0] == NULL)
		return;
	if (tokens[0][0] == '/')
		full_path = tokens[0];
	else
		full_path = _is_cmd_exist(tokens[0]);
	if (_is_cmd_exist(tokens[0]) == NULL && tokens[0][0] != '/')
	{
		_print("Command not found\n");
		free(full_path);
		return;
	}
	if (tokens[0][0] != '/')
	{
		free(tokens[0]);
		tokens[0] = full_path;
	}
	pid = fork();
	if (pid == -1)
	{
		perror(tokens[0]);
		free_token_array(tokens);
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (execve(tokens[0], tokens, environ) == -1)
		{
			perror(tokens[0]);
			free_token_array(tokens);
			_exit(EXIT_FAILURE);
		}
	}
	else
		wait(NULL);
}
