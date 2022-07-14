#include "monty.h"

/**
 * _pop - removes the top element of the stack
 * @head: a pointer to the pointer of the head node
 * @line_number: line number where the opcode is found
 * Return: returns nothing
 */

void _pop(stack_t **head, unsigned int line_number)
{
	stack_t *node;

	if (!head || !*head) /* checking if there is underflow */
		popError(head, line_number);
	node = *head;
	if (!node->next)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free(node);
	}
}
