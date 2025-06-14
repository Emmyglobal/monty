#include "monty.h"

/**
 * pchar - Prints the char at the top of the stack
 * @stack: Double pointer to the top of the stack
 * @line_number: Line number in the bytecode file
 */
void pchar(stack_t **stack, unsigned int line_number)
{
    int value;

    if (stack == NULL || *stack == NULL)
    {
        fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    value = (*stack)->n;

    if (value < 0 || value > 127)
    {
        fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
        exit(EXIT_FAILURE);
    }

    printf("%c\n", value);
}
