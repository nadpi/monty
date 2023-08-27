#include "monty.h"
/**
 * swap - swaps the top 2 elements
 * @line: line
 * @top: top
 * Return: nothing
 */
void swap(stack_t **top, unsigned int line)
{
	stack_t *curr;

	curr = *top;

	if (!*top || (*top)->prev == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	free(curr);
}

