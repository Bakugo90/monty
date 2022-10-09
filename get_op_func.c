#include "monty.h"
/**
 *get_op_func - give the good function
 *@line: the line read
 *@stack: the list
 *@line_number: the number of the line
 *Return: EXIT_SUCCESS or EXIT_FAILURE
 */

int get_op_func(char *line, stack_t **stack, unsigned int line_number)
{
	instruction_t func[] = {
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"stack", _nop},
		{"sub", _sub},
		{"mul", _mul},
		{"div", _div},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{NULL, NULL},
	};
	int i;

	for (i = 0; func[i].opcode != NULL; i++)
	{
		if (strcmp(line, func[i].opcode) == 0)
		{
			func[i].f(stack, line_number);
			return (EXIT_SUCCESS);
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, line);
	error = 1;
	return (EXIT_FAILURE);
}
