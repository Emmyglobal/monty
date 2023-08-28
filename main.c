#include "monty.h"
#include <stdio.h>


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	char *filepath = argv[1];
	
	FILE *file = fopen(filepath, "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s \n", filepath);
		exit(EXIT_FAILURE);
	}

	char *buffer_line = NULL;
	size_t len = 0;
	int line_number = 0;

	stack_t = NULL;

	while (getline(&buffer_line, &len, file) != -1)
	{
		line_number++;
		//tokenize to separate string from integer
		char *opcode = strtok(buffer_line, "\t\n");
		if (opcode == NULL || strlen(opcode) == 0)
		{
			continue;
		}
		//handles instruction
		if (strcmp(opcode, "push") == 0)
		{
			char *value_str = strtok(NULL, "\t\n");
			if (value_str == NULL)
			{
				fprintf(stderr, "L%d: ussage: push integer\n", line_number);
				free(buffer_line);
				fclose(file);
				exit(EXIT_FAILURE);
			}
			int value = atoi(value_str);
			push(&stack, value);
		}

		//implementation of pall
		if (strcmp(opcode, "pall") == 0)
		{
			pall(&stack);
		}
		else
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
			exit(EXIT_FAILURE);
		}
	}
	free(buffer_line);
	fclose(file);
	exit(EXIT_FAILURE);

	return (0);
}
