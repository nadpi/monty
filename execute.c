#include "proj.h"
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
	{"pall", pall}
	};
	int i = 0;

	while (i < 2)
	{
		if (strcmp(oper, ops[i].opcode) == 0)
		{
			ops[i].f(top, counter);
			break;
		}
		i++;
	}
}
