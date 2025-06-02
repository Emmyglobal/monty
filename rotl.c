#include "monty.h"

/**
 * rotl - Rotates the stack to the top.
 * The top element becomes the last one.
 * @stack: Double pointer to the top of the stack
 * @line_number: Line number in the bytecode file (unused)
 */
void rotl(stack_t **stack, unsigned int line_number)
{
    stack_t *first, *last;

    (void)line_number;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        return;  // Nothing to rotate

    first = *stack;
    last = *stack;

    // Find the last node
    while (last->next != NULL)
        last = last->next;

    // Detach first node
    *stack = first->next;
    (*stack)->prev = NULL;

    // Append first node at the end
    last->next = first;
    first->prev = last;
    first->next = NULL;
}
