#include "main.h"

/**
 * _is_cmd_exist - check in the path if cmd exists
 * @cmd: char *
 *
 * Return: char *
 */
char *_is_cmd_exist(char *cmd)
{
	char *full_path;
	path_t *tmp;
	path_t *path = _build_path_list();

	tmp = path;
	while (path != NULL)
	{
		full_path = _strcat_path_cmd(path->dir, cmd);

		if (full_path != NULL)
		{
			if (access(full_path, F_OK) == 0)
			{
				_free_path_list(tmp);
				return (full_path);
			}

			free(full_path);
		}

		path = path->next;
	}

	_free_path_list(tmp);
	return (NULL);
}
