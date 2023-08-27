#include "monty.h"

/**
 * push -> pushes an element into the stack
 */

void push()
{
	int data;

	if (top == SIZE - 1)
	{
		printf("Stack overflow!\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("Enter the value you want to push: \n");
		scanf("%d", &data);
		top++;
		stack[top] = data;
	}
}

/**
 * link ->
 */

void link(stack_t **stack, int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		exit(EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->next = NULL;

	if (*stack == NULL)
	{
		new_node->prev = NULL;
		*stack = new_node;
	}
	else
	{
		new_node->prev = *stack;
		(*stack)->next = new_node;
		*stack = new_node;
	}
}
