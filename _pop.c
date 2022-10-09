#include "monty.h"
/**
 * _pop - function that deletes the first node of the list
 * @stack: the list
 * @line_number: number of line of the command
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		error = 1;
		return;
	}
	*stack = (*stack)->next;
		if (*stack)
			(*stack)->prev = NULL;
		free(temp);
}
