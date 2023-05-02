/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// display sequence of fibonacci series until the number given by user and count total even numbers and odd numbers
// in that series except zero. fibonacci series should start with 1. total count of even numbers should be 
// displayed in the first row and odd numbers should be displayed in the next row. number given by user for
// fibonacci series should be greater than 5 and less than or equal to 20 otherwise display "INVALID OUTPUT"
// the text message displayed should be in exact format as it is case sensitive. 
#include <stdio.h>
int main()
{
    int n, count_even = 0, count_odd = 0, prev = 0, curr = 1, next;

    printf("Enter a number between 6 and 20: ");
    scanf("%d", &n);

    if (n < 6 || n > 20) {
        printf("INVALID OUTPUT");
        return 0;
    }

    printf("Fibonacci series up to %d:\n", n);

    while (curr <= n) {
        printf("%d ", curr);

        if (curr % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }

        next = prev + curr;
        prev = curr;
        curr = next;
    }

    printf("\nTotal even numbers: %d\n", count_even);
    printf("Total odd numbers: %d\n", count_odd);

    return 0;
}






