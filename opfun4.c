#include "monty.h"

/**
 * rotl - s
 * @stack: Double linked list
 * @line_number: File line execution
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tm = *stack;
	(void) line_number;

	if (!stack || !*stack || !(*stack)->next)
		return;
	(*stack)->next->prev = NULL;
	while (tm->next)
		tm = tm->next;
	tm->next = *stack;
	(*stack) = (*stack)->next;
	tm->next->next = NULL;
	tm->next->prev = tm;
}

/**
 * stack - s
 * @stack: Double linked list
 * @line_number: File line execution
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	(void) stack;

	var.MODE = 0;
}

/**
 * queue - s
 * @stack: Double linked list
 * @line_number: File line execution
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	(void) stack;

	var.MODE = 1;
}
