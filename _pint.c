#include "monty.h"

/**
 * _pint - prints the value at the top of the stack,
 *         followed by a new line
 * @head: a pointer to the pointer of the head node
 * @line_number: line number where the opcode is found
 * Return: returns nothing
 */

void _pint(stack_t **head, unsigned int line_number)
{
	if (!head || !*head) /* checking if the stack is empty */
		pintError(head, line_number);
	printf("%d\n", (*head)->n);
}
