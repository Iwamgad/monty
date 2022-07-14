#include "monty.h"

/**
 * _mul - multiplies the secondElement top element of the
 *        stack with the top element of the stack
 * @head: a pointer to the pointer of the head node
 * @line_number: line number where the opcode is found
 * Return: returns nothing
 */

void _mul(stack_t **head, unsigned int line_number)
{
	int firstElement, secondElement;

	if (!head || !*head || !(*head)->next) /* Checking underflow error */
		mulError(head, line_number);
	firstElement = (*head)->n;
	secondElement = (*head)->next->n;
	*head = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
	(*head)->n = firstElement * secondElement;
}
