#include "sort.h"

/**
 * swap_nodes - swaps nodes
 * @list: pointer to the list to be checked
 * @node1: pointer to first node
 * @node2: pointer to second node
 * Return: void
 */
void swap_nodes(listint_t **list, listint_t **node1, listint_t **node2)
{
	listint_t *temp = (*node1)->prev;

	(*node1)->next = (*node2)->next;

	if ((*node2)->next != NULL)
		(*node2)->next->prev = *node1;
	(*node1)->prev = *node2;
	(*node2)->next = *node1;
	(*node2)->prev = temp;

	if ((*node2)->prev != NULL)
		(*node2)->prev->next = *node2;
	else
		*list = *node2;
}
