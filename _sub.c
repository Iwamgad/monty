#include "monty.h"

/**
 * _sub - subtracts the top element of the stack
 *        from the secondElement top element of the stack
 * @head: a pointer to the pointer of the head node
 * @line_number: line number where the opcode is found
 * Return: returns nothing
 */

void _sub(stack_t **head, unsigned int line_number)
{
	int firstElement, secondElement;

	if (!head || !*head || !(*head)->next)
		subError(head, line_number);
	firstElement = (*head)->n;
	secondElement = (*head)->next->n;
	*head = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
	(*head)->n = secondElement - firstElement;
}
