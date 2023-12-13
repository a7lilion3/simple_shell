#include "shell.h"

/**
 * executeCommand - execute command
 * @command: const char *
 *
 * Return: void
 */
void executeCommand(const char *command)
{
	char *envp[1];
	char *argv[2];
	pid_t pid;
	int status;


	pid = fork();

	if (pid == -1)
		perror("fork");
	else if (pid == 0)
	{
		envp[0] = NULL;
		argv[0] = (char *) command;
		argv[1] = NULL;

		if (execve(command, argv, envp) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		do
		{
			waitpid(pid, &status, 0);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
}
