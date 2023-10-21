#include "monty.h"

void push(stack_t **stack, int data)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	
	if (new_node == NULL)
	{
		exit(EXIT_FAILURE);
	}

	new_node->n = data;
	new_node->next = NULL;

	if (*stack == NULL)
	{
		new_node->prev = NULL;
		*stack = new_node;
	}
	else
	{
		new_node->prev = *stack;
		(*stack)->next = new_node;
		*stack = new_node;
	}
}
