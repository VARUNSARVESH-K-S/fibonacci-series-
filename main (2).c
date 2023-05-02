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
#include<stdlib.h>
int main()
{
    int term1, term2, term3;
    int nterm;
    int even_ctr, odd_ctr;
    scanf("%d",&nterm);
    term1=1;
    term2=1;
    even_ctr=odd_ctr=0;
    int itr;
    itr=nterm;
    while(itr)
    {
        term3=term1+term2;
        printf("%d",term1);
        term1=term2;
        term2=term3;
        itr-=1;
    }
    printf("\n%d\n%d",nterm/3,nterm-(nterm/3));
}