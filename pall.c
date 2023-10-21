#include "monty.h"

void pall(stack_t **stack)
{
	stack_t *current = *stack;
	if (stack == NULL)
	{
		printf("stack underflow\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		while (current != NULL)
		{
			printf("%d\n", current->n);
			current = current->prev;
		}
	}
}
