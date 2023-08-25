#include "proj.h"
/**
 * pall - prints the elements of stack
 * Return: nothing
 */
void pall(stack_t **top, unsigned int line)
{
	stack_t *curr = *top;
	(void)line;
	
	if (!curr)
		exit(0);
	while(curr)
	{
		printf("%d\n", curr->n);
		curr = curr->prev;
	}
}
