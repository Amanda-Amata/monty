#include "monty.h"

/**
 * add_nodes - adds the top two elements of the stack
 * @stack: pointer to a pointer pointing to the top of the node stack
 * @line_number: int representing the linenumber of the opcode
 */

void add_nodes(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		more_err(8, line_number, "add");

	(*stack) = (*stack)->next;
	sum = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
