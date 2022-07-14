#include "monty.h"

/**
 * usageError - handles errors when the user does not give
 *              any file or more than one argument
 * @void: doesn't take any argument
 * Return: returns nothing
 */

void usageError(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * fileError - handles errors when for any reason
 *             it’s not possible to open the file
 * @void: doesn't take any argument
 * Return: returns nothing
 */

void fileError(void)
{
	fprintf(stderr, "Error: Can't open file %s \n", sharedPack.file);
	exit(EXIT_FAILURE);
}

/**
 * opcodeError- handles errors when the file
 *              contains an invalid instruction
 * @stack: a pointer to the pointer of the stack_s struct
 * @line_number: line number where the error occured
 * Return: returns nothing
 */

void opcodeError(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L<%d>: unknown instruction %s\n",
		line_number, sharedPack.opcode);
	freeStack(stack);
	exit(EXIT_FAILURE);
}

/**
 * mallocError - handles errors when it's not possible to malloc anymore
 * @stack: a pointer to the pointer of the stack_s struct
 * Return: returns nothing
 */

void mallocError(stack_t **stack)
{
	fprintf(stderr, "Error: malloc failed \n");
	freeStack(stack);
	exit(EXIT_FAILURE);
}
