#include "main.h"

/**
 * print_path - it get env variable path and print it.
 *
 * Return: void
 */
void print_path()
{
	char **tokens;
	char *path;

	path = _getenv("PATH");

	tokens = _split(path, ":\n");
	
	print_tokens(tokens);

	free_token_array(tokens);
}
