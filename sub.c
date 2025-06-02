#include "monty.h"

/**
 * sub - Subtracts the top element from the second top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the bytecode file.
 */
void sub(stack_t **stack, unsigned int line_number)
{
    stack_t *first, *second;
    int result;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    first = *stack;
    second = first->next;

    result = second->n - first->n;

    second->n = result;

    *stack = second;
    second->prev = NULL;

    free(first);
}
