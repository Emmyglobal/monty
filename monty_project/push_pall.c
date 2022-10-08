#include <stdio.h>
#include <stdlib.h>
#define Size 4

/**
* push - function that pushes element in stack
* n: integer value
*/

int Top, stackArray[n];
void push()
{
    int x;

   if (Top == n - 1)
   {
       print("Overflow!")
   }
   else if (x == !(typeof(int)) )
   {
       print("L<line_number>: usage: push integer\n")
       exit(0)
   }
   else
   {
       Top =+ 1;
       stackArray[Top] = x;
   }

}
/**
* pall - function that prints all the value in stack
* n: integer value
*/
void pall()
{
    if (Top == -1)
    {
        print("The array is empty");
    }
    else
    {
        for (int i = Top; i >= 0; --i)
        {
            print("%d\n", stackArray[i]);
        }
    }
}
