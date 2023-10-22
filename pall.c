#include "monty.h"

void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number;
	
	if (current == NULL)
		return;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
