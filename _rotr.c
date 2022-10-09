#include "monty.h"
/**
 * _rotr - function that rotates the stack to the bottom
 * @stack: the list
 * @line_number: the number to add in the node
 */

void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->prev->next = NULL;
	(*stack)->prev = temp;
	temp->next = *stack;
	temp->prev = NULL;
	*stack = temp;
}
