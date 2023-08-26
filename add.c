#include "monty.h"
/**
 * add - adds the top 2 elements
 * @line: line
 * @top: top
 * Return: nothing
 */
void add(stack_t **top, unsigned int line)
{


	if (!(*top) || !((*top)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
/*	stack_t *h;
	int len = 0;

	h = *top;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line);
	}
	printf("\n%d",len);*/
}
