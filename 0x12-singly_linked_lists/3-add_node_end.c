#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure or address or the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *kip;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	kip = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = kip;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
