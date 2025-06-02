#include "monty.h"

/**
 * pstr - Prints the string starting at the top of the stack
 * @stack: Double pointer to the top of the stack
 * @line_number: Line number in the bytecode file (unused)
 */
void pstr(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;
    int value;

    (void)line_number;  // line_number is unused here

    while (current != NULL)
    {
        value = current->n;
        if (value <= 0 || value > 127)
            break;
        putchar(value);
        current = current->next;
    }

    putchar('\n');
}
