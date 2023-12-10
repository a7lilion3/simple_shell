#include "main.h"

/**
 * print_tokens - to print tokens
 * @tokens: char **
 *
 * Return: void
 */
void print_tokens(char **tokens)
{
	size_t i;

	for (i = 0; tokens[i]; ++i)
	{
		_print(tokens[i]);
		_print("\n");
	}
}
