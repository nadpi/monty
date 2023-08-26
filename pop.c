#include "monty.h"
/**
 * pop - removes top element
 * @line: line
 * @top: top
 * Return: nothing
 */
void pop(stack_t **top, unsigned int line)
{
	stack_t *curr = *top;

	if (!*top)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}
	*top = curr->prev;
	if (*top)
		(*top)->next = NULL;
	free(curr);
}
