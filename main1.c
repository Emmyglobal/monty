#include "main.h"

int top = -1;
int stack[SIZE];

int main()
{
	int choice;

	while (1)
	{
		printf("enter 1: push or 2: pall!\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pall();
				break;
			default:
				printf("Select either 1 or 2\n");
				break;
		}
	}

	return (0);
}
