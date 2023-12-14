#include "monty.h"

/**
 * pop_top - removes the top element of the stack.
 * @stack: pointer to a pointer pointing to a nide in the stack
 * @line_number: int representing the line number of the opcode
 */

void pop_top(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
		more_err(7, line_number);
	tmp = *stack;
	*stack = tmp->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}
