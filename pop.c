#include "monty.h"

/**
 * pop - Removes the top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the bytecode file.
 */
void pop(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp;

    if (stack == NULL || *stack == NULL)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    tmp = *stack;
    *stack = tmp->next;

    if (*stack != NULL)
        (*stack)->prev = NULL;

    free(tmp);
}