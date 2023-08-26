#include "monty.h"
/**
 * push - pushes an element to the stack.
 * @top: top
 * @counter: counter
 * Return: nothing
 */
void push(stack_t **top, unsigned int counter)
{
	stack_t *newnode;
	int i = 0;

	if (omk1.arg[i] == '-')
		i++;
	for (; omk1.arg[i] != '\0'; i++)
	{
	if (!isdigit(omk1.arg[i]))
	{
	fprintf(stderr, "L%d: usage: push integer\n", counter);
	exit(EXIT_FAILURE);
	}
	}

	newnode = malloc(sizeof(stack_t));
	if (!newnode)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newnode->n = atoi(omk1.arg);
	newnode->prev = NULL;
	newnode->next = NULL;
	if (!*top)
	{
		*top = newnode;
	}
	else
	{
		(*top)->next = newnode;
		newnode->prev = *top;
		*top = newnode;
	}
}
