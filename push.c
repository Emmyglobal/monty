#include "main.h"

/**
 * push -> pushes an element into the stack
 */

void push()
{
	int data;

	if (top == SIZE - 1)
	{
		printf("Stack overflow!\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("Enter the value you want to push: \n");
		scanf("%d", &data);
		top++;
		stack[top] = data;
	}
}
