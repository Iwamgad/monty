#include "monty.h"

/**
 * pcharValError - handles errors when the value is not in the ascii table
 * @stack: a pointer to the pointer of the stack_s struct
 * @line_number: line number where the error occured
 * Return: returns nothing
 */

void pcharValError(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L<%d>: can't pchar, value out of range\n", line_number);
	freeStack(stack);
	exit(EXIT_FAILURE);
}

/**
 * pcharEmptyError - handles errors when the stack is empty
 * @stack: a pointer to the pointer of the stack_s struct
 * @line_number: line number where the error occured
 * Return: returns nothing
 */

void pcharEmptyError(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L<%d>: can't pchar, stack empty\n", line_number);
	freeStack(stack);
	exit(EXIT_FAILURE);
}
