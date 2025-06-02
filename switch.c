#include "monty.h"


/**
 * set_stack_mode - Sets the mode to STACK.
 * @stack: Double pointer to the stack (unused).
 * @line_number: Line number in the bytecode file (unused).
 */
void set_stack_mode(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
    mode = STACK;
}
/**
 * set_queue_mode - Sets the mode to QUEUE.
 * @stack: Double pointer to the stack (unused).
 * @line_number: Line number in the bytecode file (unused).
 */
void set_queue_mode(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
    mode = QUEUE;
}
