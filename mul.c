#include "monty.h"
/**
<<<<<<< HEAD:add.c
 * f_add - adds the top two elements of the stack.
=======
 * f_mul - multiplies the top two elements of the stack.
>>>>>>> fd1ee5c41dbc05b6cd3812f7e4f3455818a7eeff:mul.c
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
<<<<<<< HEAD:add.c
void f_add(stack_t **head, unsigned int counter)
=======
void f_mul(stack_t **head, unsigned int counter)
>>>>>>> fd1ee5c41dbc05b6cd3812f7e4f3455818a7eeff:mul.c
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
