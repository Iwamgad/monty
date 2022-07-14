#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
 * struct variablePack - global shared variables
 * @n: node value
 * @file: monty file to be read
 * @opcode: parsed command token
 * @queue_mode: a switch to queue mode / 0 if its off and 1 if it's on
 * Description: data that can be used everywhere in the program
 */

struct variablePack
{
        char *n;
	char *file;
	char *opcode;
	int queue_mode;
}sharedPack;

/* opcode functions */
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _sub(stack_t **head, unsigned int line_number);
void _div(stack_t **head, unsigned int line_number);
void _mul(stack_t **head, unsigned int line_number);
void _mod(stack_t **head, unsigned int line_number);
void _pchar(stack_t **head, unsigned int line_number);

/* Helping functions */
void freeStack(stack_t **stack);
void (*getOpCode(char *input_opcode))(stack_t **, unsigned int);

/* Error handling functions with respect to files, usage and malloc */
void usageError(void);
void fileError(void);
void mallocError(stack_t **stack);

/* opcode error handling functions */
void opcodeError(stack_t **stack, unsigned int line_number);
void pushError(stack_t **stack, unsigned int line_number);
void pintError(stack_t **stack, unsigned int line_number);
void popError(stack_t **stack, unsigned int line_number);
void swapError(stack_t **stack, unsigned int line_number);
void addError(stack_t **stack, unsigned int line_number);
void subError(stack_t **stack, unsigned int line_number);
void divError(stack_t **stack, unsigned int line_number);
void zeroError(stack_t **stack, unsigned int line_number);
void mulError(stack_t **stack, unsigned int line_number);
void modError(stack_t **stack, unsigned int line_number);
void pcharValError(stack_t **stack, unsigned int line_number);
void pcharEmptyError(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */
