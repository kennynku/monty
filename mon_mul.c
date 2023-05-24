#include "monty.h"

/**
 * mon_mul - adds the values of the top two elements of the stack
 * @head: double pointer to head node
 * @line_number: line number being interpreted from Monty file
 *
 * Description: The result is stored in 2nd top element, top element is removed
 * Return: nothing
 */

void mon_mul(stack_t **head, unsigned int line_number)
{
	int first, second;

	if (!head || !*head || !(*head)->next)
		mul_error(head, line_number);
	first = (*head)->n;
	second = (*head)->next->n;
	*head = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
	(*head)->n = first * second;
}
