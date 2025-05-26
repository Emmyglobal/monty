# 0x19. C - Stacks, Queues - LIFO, FIFO

A project focused on implementing stack (LIFO) and queue (FIFO) data structures in C, with various opcode operations.

---

## Concepts & Tools Used

- **Programming Language:** C
- **Project Type:** Group project
- **Core Concepts:** Algorithm, Data structure

---

## Project Overview

This is a group project for learning about stacks and queues (LIFO and FIFO) in C.  
**Team Members:** Ugochukwu Emmanuel, Charles Onalo  
**Project Duration:** Aug 22, 2023 – Aug 25, 2023

---

## Learning Objectives

- Understand LIFO (Last In, First Out) and FIFO (First In, First Out)
- What is a stack and when to use it
- What is a queue and when to use it
- Common implementations and use cases of stacks and queues
- Proper use of global variables

---

## Requirements

- **Editors:** vi, vim, emacs
- **Compilation:** Ubuntu 20.04 LTS, `gcc -Wall -Werror -Wextra -pedantic -std=c89`
- All files must end with a new line
- Use Betty style (`betty-style.pl` and `betty-doc.pl`)
- Maximum of one global variable
- No more than 5 functions per file
- Use the C standard library
- All function prototypes in `monty.h` (with include guards)
- Complete tasks in order

---

## Data Structures

```c
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element
 * @next: points to the next element
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
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
```

---

## Compilation

```sh
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```

- Output is printed on `stdout`
- Errors are printed on `stderr`

---

## Tasks & Opcodes

### 0. push, pall
- **push:** Pushes an integer to the stack.  
  Usage: `push <int>`
- **pall:** Prints all values on the stack from the top.

### 1. pint
- Prints the value at the top of the stack.  
  Usage: `pint`

### 2. pop
- Removes the top element of the stack.  
  Usage: `pop`

### 3. swap
- Swaps the top two elements of the stack.  
  Usage: `swap`

### 4. add
- Adds the top two elements of the stack.  
  Usage: `add`

### 5. nop
- Does nothing.  
  Usage: `nop`

---

## Error Handling

- Print specific error messages to `stderr` and exit with `EXIT_FAILURE` as required by each opcode.

---
