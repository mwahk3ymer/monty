#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @stack: Pointer to the pointer to the stack (doubly linked list).
 * @line_number: Line number of the opcode in the Monty byte code file.
 */
void push(stack_t **stack, unsigned int line_number)
{
	int value = 0;
	stack_t *new_node = malloc(sizeof(stack_t));
	(void)line_number;

    if (line_number == 0)
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    /* Create a new node for the stack */

    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack != NULL)
        (*stack)->prev = new_node;
    *stack = new_node;
}


/**
 * pall - Prints all the values on the stack.
 * @stack: Pointer to the pointer to the stack (doubly linked list).
 * @line_number: Line number of the opcode in the Monty byte code file.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number; /* Unused parameter */

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
