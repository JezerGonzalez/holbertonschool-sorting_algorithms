#include "sort.h"
/**
 * insertion_sort_list - sorts a linked list in ascending
 * order using Insertion
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *list, *current = *list;

	if (*list == NULL)
		return;
	while (current != NULL)
	{
		current = current->next;
		while (temp->prev && temp->prev->n > temp->n)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			temp->next = temp->prev;
			temp->prev = temp->next->prev;
			if (temp->prev != NULL)
				temp->prev->next = temp;
			else
				*list = temp;
			temp->next->prev = temp;
			print_list(*list);
		}
		temp = current;
	}
}
