#include "monty.h"

/**
 * _nop - it doesn’t do anything
 * @stack: a pointer to the pointer of the stack_s struct
 * @line_number: line number where the opcode is found
 * Return: returns nothing
 */

void _nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
