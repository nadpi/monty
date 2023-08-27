#include "monty.h"
/**
 * mul - multiplies the last 2 elements
 * @top: top
 * @line: line
 * Return: nothing
 */
void mul(stack_t **top, unsigned int line)
{
	stack_t *curr;
	int result = 0;

	curr = *top;

	if (!*top || (*top)->prev == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	result = (curr->prev->n) * (curr->n);
	curr->prev->n = result;
	*top = curr->prev;
	free(curr);
}
