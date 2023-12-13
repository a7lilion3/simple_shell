#include "main.h"

/**
 * _strcat_path_cmd - concatenates s1 and s2
 * @s1: const char *
 * @s2: const char *
 *
 * Return: char *
 */
char *_strcat_path_cmd(const char *s1, const char *s2)
{
	size_t len1, len2;
	char *res;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	res = malloc(len1 + len2 + 2);

	if (res != NULL)
	{
		_strcpy(res, s1);
		res[len1] = '/';
		_strcpy(res + len1 + 1, s2);
		return (res);
	}
	else
		return (NULL);
}
