#include "monty.h"
/**
 * execute - executes
 * @top: top
 * @oper: oper
 * @counter: counter
 * Return: nothing
 */
void execute(stack_t **top, char *oper, int counter)
{
	instruction_t ops[] = {
	{"push", push},
	{"pall", pall},
	{"nop", nop},
	{"pint", pint},
	{"pop", pop},
	{"add", add},
	{"div", fn_div},
	{"mul", mul},
	{"sub", sub},
	{"mod", fn_mod},
	{"swap", swap}
	};
	int i = 0;

	for (i = 0; i < 11; i++)
	{
		if (strcmp(oper, ops[i].opcode) == 0)
		{
			ops[i].f(top, counter);
			break;
		}
	}
}
