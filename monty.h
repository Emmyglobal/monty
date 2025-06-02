#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define STACK 0
#define QUEUE 1

extern int mode; /* Global variable to hold the mode: STACK or QUEUE */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push(stack_t **stack, unsigned int line_number, int value);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);
void free_all(stack_t **stack, FILE *file);
void set_stack_mode(stack_t **stack, unsigned int line_number);
void set_queue_mode(stack_t **stack, unsigned int line_number);
void handle_error(int error_code, unsigned int line_number);
void handle_push_error(int error_code, unsigned int line_number);
void handle_pint_error(int error_code, unsigned int line_number);
void handle_pchar_error(int error_code, unsigned int line_number);
void handle_pstr_error(int error_code, unsigned int line_number);
void handle_div_error(int error_code, unsigned int line_number);
void handle_mod_error(int error_code, unsigned int line_number);
void handle_mul_error(int error_code, unsigned int line_number);
void handle_swap_error(int error_code, unsigned int line_number);
void handle_pop_error(int error_code, unsigned int line_number);
void handle_add_error(int error_code, unsigned int line_number);
void handle_nop_error(int error_code, unsigned int line_number);
void handle_rotl_error(int error_code, unsigned int line_number);
void handle_rotr_error(int error_code, unsigned int line_number);
void handle_sub_error(int error_code, unsigned int line_number);
void handle_invalid_opcode_error(char *opcode, unsigned int line_number);

#endif /* MONTY_H */