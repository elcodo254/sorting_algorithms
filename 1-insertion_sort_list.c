#include "sort.h"

/**
 * swap_node - swaps two nodes
 * @head: head node
 * @node1: first node
 * @node2: second node
 */
void swap_node(listint_t **head, listint_t *node1, listint_t *node2)
{
	listint_t *prev, *next;

	prev = node1->prev;
	next = node2->next;

	if (prev != NULL)
		prev->next = node2;
	else
		*head = node2;

	node1->prev = node2;
	node1->next = next;
	node2->prev = prev;
	node2->next = node1;
	if (next)
		next->prev = node1;
}

/**
 * insertion_sort_list - sorts doubly linked list by insertion sort algorithm
 * @list: double pointer to a the list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *fwd, *tmp;

	if (list == NULL || *list == NULL)
		return;

	for (fwd = (*list)->next; fwd && fwd->prev; fwd = fwd->next)
	{
		for (; fwd && fwd->prev && fwd->n < fwd->prev->n; fwd =
		     fwd->prev)
		{
			tmp = fwd->prev;
			swap_node(list, tmp, fwd);
			print_list(*list);
			fwd = fwd->next;
		}
	}
}
