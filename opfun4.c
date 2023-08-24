#include "monty.h"

/**
<<<<<<< HEAD
 * rotl - s
 * @stack: Double linked list
 * @line_number: File line execution
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tm = *stack;
=======
 * rotr - s
 * @stack: Double linked list
 * @line_number: File line execution
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
>>>>>>> 28493d18f292c3689e827d212d3088dd9a180b7e
	(void) line_number;

	if (!stack || !*stack || !(*stack)->next)
		return;
<<<<<<< HEAD
	(*stack)->next->prev = NULL;
	while (tm->next)
		tm = tm->next;
	tm->next = *stack;
	(*stack) = (*stack)->next;
	tm->next->next = NULL;
	tm->next->prev = tm;
=======

	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = *stack;
	tmp->prev->next = NULL;
	tmp->prev = NULL;

	(*stack)->prev = tmp;
	*stack = tmp;

>>>>>>> 28493d18f292c3689e827d212d3088dd9a180b7e
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
