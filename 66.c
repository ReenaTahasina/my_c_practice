#include<stdio.h>
int main()
{
    printf("Hello World\n");
    greet_branch:
    printf("CSE\n");
    goto greet_branch;
    printf("PSCMRCET\n");
}