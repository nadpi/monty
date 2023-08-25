#include "proj.h"
omk_omk omk1;
int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	int i = 0, counter = 0, flag = 0;
	instruction_t ops[] = {{"push", push}, {"pall", pall}, {"nop", nop}};
	char buffer[256], *oper;
	stack_t *top = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, sizeof(buffer), fp) != NULL)
	{
		counter++;
		oper = strtok(buffer, " \n\t");
		omk1.arg = strtok(NULL, " \n\t");
		if (oper)
		{
		for (i = 0; i < 2; i++)
		{
			if (strcmp(oper, ops[i].opcode) == 0)
			{
				execute(&top, oper, counter);
				flag = 1;
			}
		}
		}
		if (flag == 0 || !oper)
		{
			printf("L%d: unknown instruction %s\n", counter, oper);
			exit(EXIT_FAILURE);
		}
	}
	fclose(fp);
	return (0);
}
