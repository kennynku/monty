#include "monty.h"

/**
 *pint_error- mon_pint error handling function
 *@stack: a ptr pointing to  a head node
 *@line_number: linumber wear error ocured
 *
 */
void pint_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 *pop_error-handles error for mon_pop function
 *@stack: a ptr pointing to  a head node
 *@line_number: linumber wear error ocured
 */
void pop_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 *swap_error-handles error for mon_swap function
 *@stack: a ptr pointing to  a head node
 *@line_number: linumber wear error ocured
 */
void swap_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't swap, stack to short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 *add_error- handles error for mon_add function
 *@stack: a ptr pointing to  a head node
 *@line_number: linumber wear error ocured
 */
void add_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't add, stack too short \n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 *moncode_error- a function that respond to ivalid instructions
 *@stack: a ptr pointing to  a head node
 *@line_number: linumber wear error ocured
 */
void moncode_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: unknown instruction %s\n",
		line_number, stack_val.moncode);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
