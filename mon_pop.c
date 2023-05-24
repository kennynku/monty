#include "monty.h"
/**
 * mon_pop - removes the top element of the stack
 * @head: double pointer to head node
 * @line_number: line number where error occured
 *
 * Description: The result is stored in 2nd top element, top element is removed
 * Return: nothing
 */

void mon_pop(stack_t **head, unsigned int line_number)
{
	stack_t *node;

	if (!head || !*head)
		pop_error(head, line_number);
	node = *head;
	if (!node->next)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free(node);
	}
}
