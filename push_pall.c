#include "monty.h"

/**
 * push - Pushes an integer onto the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number in the file.
 * @value: The integer to push.
 */
void push(stack_t **stack, unsigned int line_number, int value)
{
    stack_t *new, *current;

    (void)line_number;
    new = malloc(sizeof(stack_t));

    if (new == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new->n = value;
    new->next = NULL;
    new->prev = NULL;

    if (mode == STACK || *stack == NULL)
    {
        new->next = *stack;
        if (*stack != NULL)
            (*stack)->prev = new;
        *stack = new;
    }
    else if (mode == QUEUE)
    {
        current = *stack;
        while (current->next != NULL)
            current = current->next;

        current->next = new;
        new->prev = current;
    }
}

/**
 * pall - Prints all values on the stack from the top.
 * @stack: Double pointer to the stack.
 * @line_number: Line number in the file.
 */
void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    (void)line_number;

    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
