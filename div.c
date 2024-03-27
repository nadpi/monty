#include "monty.h"
/**
 * fn_div - divides the last 2 elements
 * @top: top
 * @line: line
 * Return: nothing
 */
void fn_div(stack_t **top, unsigned int line)
{
	stack_t *curr;
	int result = 0;

	curr = *top;

	if (!*top || (*top)->prev == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	else if ((*top)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line);
		exit(EXIT_FAILURE);
	}

	result = (curr->prev->n) / (curr->n);
	curr->prev->n = result;
	*top = curr->prev;
	free(curr);
}
