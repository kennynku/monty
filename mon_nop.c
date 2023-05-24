#include "monty.h"

/**
 * mon_nop - does nothing
 * @stack: double pointer to head node (unused)
 * @line_number: line being interpreted from Monty file (unused)
 *
 * Description: The result is stored in 2nd top element, top element is removed
 * Return: nothing
 */

void mon_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
