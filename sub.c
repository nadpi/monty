#include "monty.h"
/**
 * sub - subtracts the top 2 elements
 * @line: line
 * @top: top
 * Return: nothing
 */
void sub(stack_t **top, unsigned int line)
{
	stack_t *curr;
	int sum = 0;

	curr = *top;


	if (!*top || (*top)->prev == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	sum = curr->n - curr->prev->n;
	curr->prev->n = sum;
	*top = curr->prev;
	free(curr);
}

