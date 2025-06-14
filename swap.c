#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the bytecode file.
 */
void swap(stack_t **stack, unsigned int line_number)
{
    stack_t *first, *second;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    first = *stack;
    second = first->next;

    /* Swap the nodes by adjusting pointers */

    first->next = second->next;
    if (second->next != NULL)
        second->next->prev = first;

    second->prev = NULL;
    second->next = first;

    first->prev = second;

    *stack = second;
}
