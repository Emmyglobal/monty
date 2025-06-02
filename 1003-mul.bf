,>++++++[<-------->-],          Read first digit, convert ASCII to int
[->>+>+<<]>>[-<<+>>]<<          Copy first digit to two cells
>++++++[<-------->-]            Read second digit, convert ASCII to int
[->+>+<<]                       Copy second digit
>>[<<[->>+<<]>>[-<<+>>]<<-]     Multiply logic: first * second into cell
>>>+                            Add 1 to result (to fix off-by-one loop bug)
<<<<<                           Move to result

>++++++[>++++++++<-]            Multiply by 10 in a helper cell (for ASCII math)

>>[->+>+<<]>>[-<<+>>]<<         Copy result
++++++++++                      Add 10
>[-<++++++>]<.                  Print tens digit
<[-]                            Clear
<[-]                            Clear

>>++++++++++                    Add ASCII '0' for units
.                               Print units
++++++++++.                     Print newline (ASCII 10)
