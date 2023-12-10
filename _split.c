#include "main.h"

/**
 * _split - split a string to tokens.
 * @s: const char *s
 * @d: const char *d
 *
 * Return: char **
 */
char **_split(const char *s, const char *d)
{
	size_t count, i;
	char *tmpstr, *token;
	char **tokens;

	count = 0;
	tmpstr = _strdup(s);

	if (tmpstr == NULL)
		return (NULL);

	/* count the number of tokens */
	token = _strtok(tmpstr, d);
	while (token != NULL)
	{
		++count;
		token = _strtok(NULL, d);
	}

	/* allocate memory for the array of tokens */
	tokens = malloc((count + 1) * sizeof(char *));

	if (tokens == NULL)
		return (NULL);

	free(tmpstr);

	/* split string into tokens and store in array */
	i = 0;
	tmpstr = _strdup(s);
	token = _strtok(tmpstr, d);

	if (token == NULL)
		tokens[i++] = NULL;

	while (token != NULL)
	{
		tokens[i++] = _strdup(token);
		token = _strtok(NULL, d);
	}

	tokens[i] = NULL;

	free(tmpstr);

	return (tokens);
}
