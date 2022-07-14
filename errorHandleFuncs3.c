#include "monty.h"

/**
 * subError - handles errors when the stack contains less than two elements
 * @stack: a pointer to the pointer of the stack_s struct
 * @line_number: line number where the error occured
 * Return: returns nothing
 */

void subError(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L<%d>: can't sub, stack too short\n", line_number);
	freeStack(stack);
	exit(EXIT_FAILURE);
}

/**
 * divError - handles errors when the stack contains less than two elements
 * @stack: a pointer to the pointer of the stack_s struct
 * @line_number: line number where the error occured
 * Return: returns nothing
 */

void divError(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L<%d>: can't div, stack too short\n", line_number);
	freeStack(stack);
	exit(EXIT_FAILURE);
}

/**
 * zeroError - handles errors when the top element of the stack is 0
 * @stack: a pointer to the pointer of the stack_s struct
 * @line_number: line number where the error occured
 * Return: returns nothing
 */

void zeroError(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L<%d>: division by zero\n", line_number);
	freeStack(stack);
	exit(EXIT_FAILURE);
}

/**
 * mulError - handles errors when the stack contains less than two elements
 * @stack: a pointer to the pointer of the stack_s struct
 * @line_number: line number where the error occured
 * Return: returns nothing
 */

void mulError(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L<%d>: can't mul, stack too short\n", line_number);
	freeStack(stack);
	exit(EXIT_FAILURE);
}

/**
 * modError - handles errors when the stack contains less than two elements
 * @stack: a pointer to the pointer of the stack_s struct
 * @line_number: line number where the error occured
 * Return: returns nothing
 */

void modError(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L<%d>: can't mod, stack too short\n", line_number);
	freeStack(stack);
	exit(EXIT_FAILURE);
}
