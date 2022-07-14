#include "monty.h"

/**
 * freeStack- frees all the elements of a stack
 * @stack: a pointer to the head node
 * Return: returns nothing
 */

void freeStack(stack_t **stack)
{
	stack_t *node = NULL;

	if (!stack || !*stack)
		return;
	while (*stack)
	{
		node = *stack;
		*stack = (*stack)->next;
		free(node);
	}
}

/**
 * getOpCode- searches instruction for opcode functions
 * @input_opcode: opcode to search for
 * Return: points to the requested function or an error if it fails
 */

void (*getOpCode(char *input_opcode))(stack_t **, unsigned int)
{
	instruction_t instructions[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL}
	};
	int index = 0;

	while (instructions[index].opcode)
	{
		if (strcmp(instructions[index].opcode, input_opcode) == 0)
			return (instructions[index].f);
		index++;
	}

	return (opcodeError);
}
