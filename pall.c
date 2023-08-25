#include "main.h"

/**
 * pall ->
 */

void pall()
{
	if (top == -1)
	{
		printf("Stack empty\n");
		exit(EXIT_FAILURE);
	}

	for (int i  = top; i >= 0; i--)
	{
		printf("%d\n", stack[i]);
	}
}
