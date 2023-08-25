#include "monty.h"

/**
 * _freeall - Clean all given program mallocs
 * Return: None
 */
void _freeall(void)
{
	if (var.buff != NULL)
		free(var.buff);
	if (var.file != NULL)
		fclose(var.file);
	free(var.dict);
	if (var.head != NULL)
	{
		while (var.head->next != NULL)
		{
			var.head = var.head->next;
			free(var.head->prev);
		}
		free(var.head);
	}
}

/**
 * _isanumeral - Cleans all given program mallocs
 * @string: Num to validate
 * Return: 0 Success, 1 Failed
 */
int _isanumeral(char *string)
{
	int i;

	for (i = 0; string[i]; i++)
	{
		if (string[i] < 48 || string[i] > 57)
			return (1);
	}
	return (0);
}
