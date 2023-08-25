#include "proj.h"
/**
 * execute - executes
 * @n: num of args
 * Return: nothing
 */
void execute(stack_t **top, char* oper, int counter)
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
