#include "monty.h"
/**
 * get_mon_func- searches instruction for moncode functions
 * @str: moncode to search for
 *
 * Return: ptr to the desired function otherwise moncode_error
 */
 
void (*get_mon_func(char *str))(stack_t **, unsigned int)
{
	instruction_t instructions[] = {
		{"push", mon_push},
		{"pall", mon_pall},
		{"pint", mon_pint},
		{"pop", mon_pop},
		{"swap", mon_swap},
		{"add", mon_add},
		{"nop", mon_nop},
		{"sub", mon_sub},
		{"div", mon_div},
		{"mul", mon_mul},
		{"mod", mon_mod},
		{"pchar", mon_pchar},
		{"#", mon_nop},
		{NULL, NULL}
	};
	int idx = 0;

	while (instructions[idx].moncode)
	{
		if (strcmp(instructions[idx].moncode, str) == 0)
			return (instructions[idx].f);
		idx++;
	}

	return (moncode_error);
}
