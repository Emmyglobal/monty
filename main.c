#include "monty.h"

int mode = STACK; /* Default mode is STACK */

/**
 * main -> Entry point for the Monty interpreter
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, EXIT_FAILURE on error
 */
int main(int argc, char *argv[])
{
    FILE *file;
    char line[1024];
    unsigned int line_number;
    stack_t *stack = NULL;

    line_number = 0;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (!file)
    {
        fprintf(stderr, "Error: can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while (fgets(line, sizeof(line), file))
    {
        char *ptr = line;

        line_number++;

        // Skip leading spaces or tabs
        while (*ptr == ' ' || *ptr == '\t')
            ptr++;

        // Skip comments and empty lines
        if (*ptr == '#' || *ptr == '\n' || *ptr == '\0')
            continue;

        if (strncmp(ptr, "push", 4) == 0)
        {
            int value;
            if (sscanf(ptr + 4, "%d", &value) != 1)
            {
                fprintf(stderr, "L%u: usage: push integer\n", line_number);
                exit(EXIT_FAILURE);
            }
            push(&stack, line_number, value);
        }
        else if (strncmp(ptr, "pall", 4) == 0)
            pall(&stack, line_number);
        else if (strncmp(ptr, "pint", 4) == 0)
            pint(&stack, line_number);
        else if (strncmp(ptr, "pop", 3) == 0)
            pop(&stack, line_number);
        else if (strncmp(ptr, "swap", 4) == 0)
            swap(&stack, line_number);
        else if (strncmp(ptr, "add", 3) == 0)
            add(&stack, line_number);
        else if (strncmp(ptr, "nop", 3) == 0)
            continue;
        else if (strncmp(ptr, "sub", 3) == 0)
            sub(&stack, line_number);
        else if (strncmp(ptr, "div", 3) == 0)
            _div(&stack, line_number);
        else if (strncmp(ptr, "mul", 3) == 0)
            mul(&stack, line_number);
        else if (strncmp(ptr, "mod", 3) == 0)
            mod(&stack, line_number);
        else if (strncmp(ptr, "pchar", 5) == 0)
            pchar(&stack, line_number);
        else if (strncmp(ptr, "pstr", 4) == 0)
            pstr(&stack, line_number);
        else if (strncmp(ptr, "rotl", 4) == 0)
            rotl(&stack, line_number);
        else if (strncmp(ptr, "rotr", 4) == 0)
            rotr(&stack, line_number);
        else if (strncmp(ptr, "stack", 5) == 0)
            set_stack_mode(&stack, line_number);
        else if (strncmp(ptr, "queue", 5) == 0)
            set_queue_mode(&stack, line_number);
        else
        {
            fprintf(stderr, "L%u: unknown instruction %s\n", line_number, ptr);
            exit(EXIT_FAILURE);
        }
    }
    fclose(file);
    return (0);
}