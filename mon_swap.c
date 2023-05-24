#include "monty.h"

/**
 * mon_swap - swaps the values of the top two elements of the stack
 * @head: double pointer to head node
 * @line_number: line number being interpreted from Monty file
 *
 * Description: The result is stored in 2nd top element, top element is removed
 * Return: nothing
 */

void mon_swap(stack_t **head, unsigned int line_number)
{
	int temp_n;

	if (!head || !*head || (*head)->next == NULL)
		swap_error(head, line_number);
	temp_n = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = temp_n;
}
