#include "main.h"

/**
 * get_line_tokens - split and return a line of string from stdin
 * @prompt: const char *
 * @d: const char *
 *
 * Return: char **
 */
char **get_line_tokens(const char *prompt, const char *d)
{
	char *line;
	char **tokens;

	line = _getline(prompt);

	if (line == NULL)
		return (NULL);

	tokens = _split(line, d);

	free(line);

	return (tokens);
}
