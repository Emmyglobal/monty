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
* pop - removes the top element
* @stack: double pointer
* @line_number: the number line
* Return: void
*/
void pop(stack_t **stack, unsigned int line_number)
{
	if(!stack)
	{
		printf("L<line_number>: can't pop an empty stack\n");
		Cleaner();
		exit(EXIT_FAILURE);
	}
	delete_dnodeint_at_index(stack,0);
}
/**
* swap - swaps the elements
* @stack: double pointer
* @line_number: the number line
* Return: void
*/
void swap(stack_t **stack, unsigned int line_number)
{
	if((!stack) || !(*stack)->next)
	{
		printf("L<line_number>: can't swap, stack too short\n");
		Cleaner();
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}

/**
 * nop - returns nothing from stack
 * @stack: doubly linked list
 * @line_number: the line
 * Return: Nothing.
 */

void nop(stack_t **stack, unsigned int line_number)
{
 (void)stack;
 (void)line_number;
}

/**
 * pall - prints everything in stack
 * @stack: doubly linked list
 * @line_number: the line
 * Return: Nothing.
 */

void pall(stack_t **stack, unsigned int line_number)
{
 (void)line_number;
 print_dlistint(*stack);
}
