#include "monty.h"
/**
 * pint - print top
 * @line: line
 * @top: top
 * Return: nothing
 */
void pint(stack_t **top, unsigned int line)
{
	if (!*top)
	{
		printf("L%d: can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", (*top)->n);
}
