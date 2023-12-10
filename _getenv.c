#include "main.h"

/**
 * _getenv - retrieves value of environment
 * @name: char *
 *
 * Return: char *
 */
char *_getenv(const char *name)
{
	char *esign, *tstr;
	size_t i, nlen;

	if (name == NULL)
		return (NULL);

	for (i = 0; environ[i]; ++i)
	{
		tstr = _strdup(environ[i]);
		esign = _strchr(environ[i], '=');

		if (esign != NULL)
		{
			nlen = esign - environ[i];
			tstr[nlen] = '\0';
			if (_strcmp(tstr, name) == 0 && nlen == _strlen(name))
			{
				free(tstr);
				return (esign + 1);
			}
		}
		free(tstr);
	}

	return (NULL);
}
