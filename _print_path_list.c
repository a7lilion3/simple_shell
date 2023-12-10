#include "main.h"

/**
 * _print_path_list - prints the linked list of dirs
 * @head: path_t *
 *
 * Return: void
 */
void _print_path_list(path_t *head)
{
	while (head)
	{
		_print(head->dir);
		_print("\n");
		head = head->next;
	}
}
