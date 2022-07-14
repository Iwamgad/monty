#include "monty.h"

/**
 * _mod - computes the rest of the division of the
 *        secondElement top element of the stack by the top
 *        element of the stack
 * @head: a pointer to the pointer of the head node
 * @line_number: line number where the opcode is found
 * Return: returns nothing
 */

void _mod(stack_t **head, unsigned int line_number)
{
	int firstElement, secondElement;

	if (!head || !*head || !(*head)->next) /* Checking underflow error */
		modError(head, line_number);
	if ((*head)->n == 0)
		zeroError(head, line_number);
	firstElement = (*head)->n;
	secondElement = (*head)->next->n;
	*head = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
	(*head)->n = secondElement % firstElement;
}
