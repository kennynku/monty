#include "monty.h"
/**
 * mon_pint - prints the value at the top of the stack
 * @head: double pointer to head node of stack
 * @line_number: line number being interpreted from Monty file
 *
 * Description: The result is stored in 2nd top element, top element is removed
 * Return: nothing
 */

void mon_pint(stack_t **head, unsigned int line_number)
{
	if (!head || !*head)
		pint_error(head, line_number);
	printf("%d\n", (*head)->n);
}
