#include "monty.h"

/**
 * _pchar - prints the char at the top of the stack,
 *          followed by a new line
 * @head: a pointer to the pointer of the head node
 * @line_number: line number where the opcode is found
 * Return: returns nothing
 */

void _pchar(stack_t **head, unsigned int line_number)
{
	if (!head || !*head) /* Checks if the stack is empty */
		pcharEmptyError(head, line_number);
	if ((*head)->n > 127 || (*head)->n < 0)
		pcharValError(head, line_number);
	printf("%c\n", (*head)->n);
}
