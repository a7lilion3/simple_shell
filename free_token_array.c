#include "main.h"

/**
 * free_token_array - to free array of token's mem
 * @tokens: char **
 *
 * Return: void
 */
void free_token_array(char **tokens)
{
	size_t i;

	if (tokens == NULL)
		return;

	for (i = 0; tokens[i]; ++i)
		free(tokens[i]);

	free(tokens);
}
