#include "main.h"

/**
 * _free_path_list - free memory of a path linked list
 * @head: path_t *
 *
 * Return: void
 */
void _free_path_list(path_t *head)
{
	path_t *next;

	while (head)
	{
		next = head->next;
		free(head->dir);
		free(head);
		head = next;
	}
}
