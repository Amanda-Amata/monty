#include "monty.h"

/**
 * print_top - prints the value at the top of the stack
 * @stack:pointer to the pointer pointing to the top of the node of stack
 * @line_number: int representing the line number of the opcode
 */

void print_top(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
		more_err(6, line_number);
	printf("%d\n", (*stack)->n);
}
