#include "monty.h"

/**
 * _pall - prints all the values on the stack,
 *         starting from the top of the stack.
 * @stack: a pointer to the pointer of the stack_s struct
 * @line_number: line number where the opcode is found
 * Return: returns nothing
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node = NULL;

	if (!line_number)
        return;
	node = *stack;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
