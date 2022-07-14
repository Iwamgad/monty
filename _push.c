#include "monty.h"


/**
 * _push - adds an element on top of a stack
 * @head: a pointer to the pointer of the head node
 * @line_number: line number where the opcode is found
 * Return: returns nothing
 */

void _push(stack_t **head, unsigned int line_number)
{
    stack_t *newNode = NULL, *tail = NULL;
    size_t index = 0;

    if (!head || !line_number)
	    exit(EXIT_FAILURE);
	if (sharedPack.n[index] == '\0')
        pushError(head, line_number);
	newNode = malloc(sizeof(stack_t));
	if (!newNode)
		mallocError(head);
	while (sharedPack.n[index] != '\0')
	{
		if (isdigit(sharedPack.n[index]) == 0 &&
		    sharedPack.n[index] != '-')
			pushError(head, line_number);
		index++;
	}
	newNode->n = atoi(sharedPack.n);

	if (sharedPack.queue_mode == 1)
	{
		newNode->next = NULL;
		if (!*head)
		{
			newNode->prev = NULL;
			*head = newNode;
		}
		else
		{
			tail = *head;
			while (tail->next)
				tail = tail->next;
			newNode->prev = tail;
			tail->next = newNode;
		}
	}
	else
	{
		newNode->prev = NULL;
		newNode->next = *head;
		if (*head)
			(*head)->prev = newNode;
		*head = newNode;
	}
}
