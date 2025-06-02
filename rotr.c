#include "monty.h"

/**
 * rotr - Rotates the stack to the bottom.
 * The last element becomes the top of the stack.
 * @stack: Double pointer to the top of the stack
 * @line_number: Line number in the bytecode file (unused)
 */
void rotr(stack_t **stack, unsigned int line_number)
{
    stack_t *last, *second_last;

    (void)line_number;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        return;  // Nothing to rotate

    last = *stack;

    // Traverse to the last node
    while (last->next != NULL)
        last = last->next;

    second_last = last->prev;
    second_last->next = NULL;

    last->prev = NULL;
    last->next = *stack;
    (*stack)->prev = last;

    *stack = last;
}
