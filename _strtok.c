#include "main.h"

/**
 * _strtok - tokenizes s based on d
 * @s: char *
 * @d: const char *
 *
 * Return: char *
 */
char *_strtok(char *s, const char *d)
{
	static char *token;
	char *end;	/* end of a token */

	if (s != NULL)
		token = s;
	else
	{
		if (token == NULL)
			return (NULL);
		s = token;
	}

	/* find beginning of next token */
	s += _strspn(s, d);

	if (*s == '\0')
	{
		token = NULL;
		return (NULL);
	}

	/* find the end of the token */
	end = s + _strcspn(s, d);

	if (*end != '\0')
	{
		*end = '\0';
		token = end + 1;
	}
	else
		token = NULL;

	return (s);
}
