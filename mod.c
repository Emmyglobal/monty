#include "monty.h"

/**
 * mod - Computes the remainder of the division of the second top element
 *       of the stack by the top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the bytecode file.
 */
void mod(stack_t **stack, unsigned int line_number)
{
    stack_t *first, *second;
    int result;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    first = *stack;
    second = first->next;

    if (first->n == 0)
    {
        fprintf(stderr, "L%u: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    result = second->n % first->n;

    second->n = result;

    *stack = second;
    second->prev = NULL;

    free(first);
}
