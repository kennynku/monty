#include "monty.h"

/**
 * mon_sub - subtracts the values from the top two elements of the stack
 * @head: double pointer to head node
 * @line_number: line number being intrepreted from Monty file
 *
 * Description: The result is stored in 2nd top element, top element is removed
 * Return: nothing
 */

void mon_sub(stack_t **head, unsigned int line_number)
{
	int first, second;

	if (!head || !*head || !(*head)->next)
		sub_error(head, line_number);
	first = (*head)->n;
	second = (*head)->next->n;
	*head = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
	(*head)->n = second - first;
}
