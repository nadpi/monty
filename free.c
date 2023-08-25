#include "proj.h"
/**
 * free - frees
 * @top: stack
 * Return: nothing
 */
void freest(stack_t **top)
{
	stack_t *curr = *top;

	while (*top)
	{
		curr = *top;
		*top = (*top)->next;
		free(curr);
	}
}
