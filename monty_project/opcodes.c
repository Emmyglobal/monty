#include <stdio.h>
#include "monty.h"

/**
 * push - adds data to the top of the stack
 * @stack: double pointer
 * @line_number: the number line
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	register int num;
	char *params = strtok(NULL, "\n");
	
	if (check_string(params) == -1)
	{
		fprintf(stderr, "L%u: usage push integer \n", line_number);
		cleaner();
		exit(EXIT_FAILURE);
	}
	num = atoi(params);
	if (args.order == 1)
	{
		add_dnodeint(stack, num);
	}
	else
	{
		add_dnodeint_end(stack, num);
	}
}

/**
 * pall - list the elements of the stack
 * @stack: double pointer
 * @line_number: the number line
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	int stack;

	if (Top == -1)
    {
        print("The array is empty");
    }
    else
    {
        for (int i = Top; i >= 0; --i)
        {
            print("%d\n", stack[i]);
        }
    }
}
