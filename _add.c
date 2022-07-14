#include "monty.h"

/**
 * _add - adds the top two elements of the stack
 * @head: a pointer to the pointer of the head node
 * @line_number: line number where the opcode is found
 * Return: returns nothing
 */

void _add(stack_t **head, unsigned int line_number)
{
	int first, second;

	if (!head || !*head || !(*head)->next) /*checking if there is overflow*/
		addError(head, line_number);
	first = (*head)->n;
	second = (*head)->next->n;
	*head = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
	(*head)->n = first + second;
}
