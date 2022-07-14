#include "monty.h"


/**
 * pushError - handles error for the _push function
 * @stack: a pointer to the pointer of the head node
 * @line_number: line number where the error occured
 * Return: returns nothing
 */

void pushError(stack_t **stack, unsigned int line_number)
{
	 fprintf(stderr, "L<%d>: usage: push integer\n", line_number);
	 free_stack(stack);
	 exit(EXIT_FAILURE);
}

/* It's not expected to handle pall errors*/

/**
 * pintError - handles error for the _push function
 * @stack: a pointer to the pointer of the head node
 * @line_number: line number where the error occured
 * Return: returns nothing
 */

void pintError(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L<%d>: can't pint, stack empty\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * popError - handles error for the _pop function
 * @stack: a pointer to the pointer of the head node
 * @line_number: line number where the error occured
 * Return: returns nothing
 */

void popError(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L<%d>: can't pop an empty stack\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * swapError - handles error for the _swap function
 * @stack: a pointer to the pointer of the head node
 * @line_number: line number where the error occured
 * Return: returns nothing
 */

void swapError(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L<%d>: can't swap, stack to short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * addError - handles error for the _add function
 * @stack: a pointer to the pointer of the head node
 * @line_number: line number where the error occured
 * Return: returns nothing
 */

void addError(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L<%d>: can't add, stack too short \n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
