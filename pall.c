#include "monty.h"
/**
 * pall - prints the elements of stack
 * @top: top
 * @line: line
 * Return: nothing
 */
void pall(stack_t **top, unsigned int line)
{
	stack_t *curr = *top;
	(void)line;

	if (!curr)
		return;
	while (curr)
	{
		fprintf(stdout, "%d\n", curr->n);
		curr = curr->prev;
	}
}
