#include "monty.h"

/**
 * beg_var - Fake rand to jackpoint Giga Millions
 * @var: Global vars to initialize
 * Return: 0 Success, 1 Failed
 */
int beg_var(vars *var)
{
	var->file = NULL;
	var->buff = NULL;
	var->tmp = 0;
	var->dict = _forminstruct();
	if (var->dict == NULL)
		return (EXIT_FAILURE);
	var->head = NULL;
	var->line_number = 1;
	var->MODE = 0;

	return (EXIT_SUCCESS);
}

/**
 * _forminstruct - Create new funns dictionary
 * Return: Dictionary given pointer
 */
instruction_t *_forminstruct()
{
	instruction_t *ptr = malloc(sizeof(instruction_t) * 18);

	if (!ptr)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	ptr[0].opcode = "pall", ptr[0].f = pall;
	ptr[1].opcode = "push", ptr[1].f = push;
	ptr[2].opcode = "pint", ptr[2].f = pint;
	ptr[3].opcode = "pop", ptr[3].f = pop;
	ptr[4].opcode = "swap", ptr[4].f = swap;
	ptr[5].opcode = "add", ptr[5].f = add;
	ptr[6].opcode = "nop", ptr[6].f = NULL;


	ptr[9].opcode = "mul", ptr[9].f = mul;
	ptr[10].opcode = "mod", ptr[10].f = mod;
	ptr[11].opcode = "pchar", ptr[11].f = pchar;
	ptr[12].opcode = "pstr", ptr[12].f = pstr;


	ptr[15].opcode = "stack", ptr[15].f = stack;
	ptr[16].opcode = "queue", ptr[16].f = queue;
	ptr[17].opcode = NULL, ptr[17].f = NULL;

	return (ptr);
}

/**
 * _invokefunc - Call certain Functions
 * @var: Global variables
 * @opcode: Command to execute
 * Return: None
 */
int _invokefunc(vars *var, char *opcode)
{
	int i;

	for (i = 0; var->dict[i].opcode; i++)
		if (strcmp(opcode, var->dict[i].opcode) == 0)
		{
			if (!var->dict[i].f)
				return (EXIT_SUCCESS);
			var->dict[i].f(&var->head, var->line_number);
			return (EXIT_SUCCESS);
		}
	if (strlen(opcode) != 0 && opcode[0] != '#')
	{
		fprintf(stderr, "L%u: unknown instruction %s\n",
			var->line_number, opcode);
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
