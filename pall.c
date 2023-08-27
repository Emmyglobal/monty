#include "monty.h"

/**
 * pall ->
 */

void pall()
{
	if (top == -1)
	{
		printf("Stack empty\n");
		exit(EXIT_FAILURE);
	}

	for (int i  = top; i >= 0; i--)
	{
		printf("%d\n", stack[i]);
	}
}

/**
 * print -> 
 */
void print(stack_t **stack)
{
	if (*stack === NULL)
	{
		printf("Stack underflow\n");
		exit(EXIT_FAILURE);
	}
	else
		while (current != NULL)
		{
			printf("%d\n", current->n);
			current = current->prev
		}
}
