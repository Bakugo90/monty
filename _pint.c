#include "monty.h"
/**
 * _pint - function that prints the value at the top of the stack
 * @stack: the list
 * @line_number: number of line of the command
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		error = 1;
		return;
	}
	printf("%d\n", (*stack)->n);
}
