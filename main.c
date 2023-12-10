#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0.
 */
int main(void)
{
	char **tokens;
	char *prompt;

	if (isatty(0))
		prompt = "($) ";
	else
		prompt = "$ ";
		
	while ((tokens = get_line_tokens(prompt, " \n")))
	{
		print_path();

		free_token_array(tokens);
	}

	return (0);
}
