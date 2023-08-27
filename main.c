#include "monty.h"
omk_omk omk1;
int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	int i = 0, counter = 0, flag = 0;
	instruction_t ops[] = {{"push", push}, {"pall", pall}, {"nop", nop}, {"pint", pint}, {"pop", pop}, {"add", add}, {"div", fn_div}, {"mul", mul}, {"sub", sub}, {"mod", fn_mod}, {"swap", swap}};
	char buffer[256], *oper;
	stack_t *top = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, sizeof(buffer), fp) != NULL)
	{
	counter++;
	oper = strtok(buffer, " \n\t");
	if (oper == NULL || strlen(oper) == 0 || strstr(oper, "#")) {
        continue;
	}
	omk1.arg = strtok(NULL, " \n\t");
	if (oper)
	{
		if (strcmp(oper, "push") == 0)
		{
	       if (omk1.arg == NULL)
        {
            fprintf(stderr, "L%d: usage: push integer\n", counter);
            exit(EXIT_FAILURE);
        }
	       if (!isdigit(omk1.arg[0]) && omk1.arg[0] != '-')
    {
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        exit(EXIT_FAILURE);
    }
		}
	for (i = 0; i < 11; i++)
	{
		flag = 0;
		if (strcmp(oper, ops[i].opcode) == 0)
		{
			execute(&top, oper, counter);
			flag = 1;
			break;
		}
	}
	}
	if (flag == 0)
	{
	fprintf(stderr, "L%d: unknown instruction %s\n", counter, oper);
	exit(EXIT_FAILURE);
	}
	}
	fclose(fp);
	return (EXIT_SUCCESS);
}
