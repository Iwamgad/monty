#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack
 * @head: a pointer to the pointer of the head node
 * @line_number: line number where the opcode is found
 * Return: returns nothing
 */

void _swap(stack_t **head, unsigned int line_number)
{
	int tempNode;

	if (!head || !*head || (*head)->next == NULL)
		swapError(head, line_number);
	tempNode = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = tempNode;
}
