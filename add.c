#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the bytecode file.
 */
void add(stack_t **stack, unsigned int line_number)
{
    stack_t *first, *second;
    int sum;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    first = *stack;
    second = first->next;

    sum = first->n + second->n;

    second->n = sum;

    // Remove the first node (top element)
    *stack = second;
    second->prev = NULL;
    free(first);
}
