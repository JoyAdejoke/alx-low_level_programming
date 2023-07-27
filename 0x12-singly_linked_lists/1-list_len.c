#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: Pointer of list_t list
 *
 * Return: Numbers of element in h
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
