#include "lists.h"
/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: Address of the linked list's head
 * Return: Unsigned int with the number of nodes printed
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		k++;
		h = h->next;
	}
	return (k);
}
