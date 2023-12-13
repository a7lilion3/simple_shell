#include "main.h"

/**
 * _build_path_list - builds a linked list of dirs
 *
 * Return: path_t *
 */
path_t *_build_path_list(void)
{
	path_t *head;
	path_t *current;
	path_t *new;
	char *token;
	char *path = _strdup(_getenv("PATH"));

	if (path == NULL)
		return (NULL);

	head = NULL;
	current = NULL;

	token = _strtok(path, ":");
	while (token != NULL)
	{
		new = malloc(sizeof(path_t));
		if (new != NULL)
		{
			new->dir = _strdup(token);
			new->next = NULL;

			if (current == NULL)
			{
				head = new;
				current = new;
			}
			else
			{
				current->next = new;
				current = new;
			}
		}

		token = _strtok(NULL, ":");
	}

	free(path);
	return (head);
}
