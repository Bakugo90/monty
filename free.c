#include "monty.h"
/**
 * free_all - function that free all and close the file
 * @stack: the list to free
 * @line: the line of getline to free
 * @ptr: the file to close
 */

void free_all(stack_t *stack, char *line, FILE *ptr)
{
	stack_t *temp = stack;

	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
	free(line);
	fclose(ptr);
}
